<?php
/**
 * @file
 * oa_messages.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function oa_messages_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_message_type().
 */
function oa_messages_default_message_type() {
  $items = array();
  $items['oa_create'] = entity_import('message_type', '{
    "name" : "oa_create",
    "description" : "Open Atrium Create Content",
    "argument_keys" : [],
    "argument" : [],
    "category" : "message_type",
    "data" : { "purge" : { "override" : 0, "enabled" : 0, "quota" : "", "days" : "" } },
    "language" : "en",
    "arguments" : null,
    "message_text" : { "und" : [
        {
          "value" : "[message:field-oa-message-group] : [message:user:name] created new [message:field-oa-node-ref:content-type] : [message:field-oa-node-ref:title]",
          "format" : "plain_text",
          "safe_value" : "\\u003Cp\\u003E[message:field-oa-message-group] : [message:user:name] created new [message:field-oa-node-ref:content-type] : [message:field-oa-node-ref:title]\\u003C\\/p\\u003E\\n"
        },
        {
          "value" : "\\u003Cp\\u003E[message:field-oa-message-text:value]\\u0026nbsp;[message:field-oa-node-ref:body]\\u003C\\/p\\u003E",
          "format" : "panopoly_wysiwyg_text",
          "safe_value" : "\\u003Cp\\u003E[message:field-oa-message-text:value]\\u00a0[message:field-oa-node-ref:body]\\u003C\\/p\\u003E\\n"
        },
        {
          "value" : "[message:timestamp:panopoly_time] \\u003Ca href=\\u0022\\/user\\/[message:user:uid]\\u0022\\u003E[message:user:name]\\u003C\\/a\\u003E created new [message:field-oa-node-ref:content-type]: \\u003Ca href=\\u0022\\/node\\/[message:field-oa-node-ref:nid]\\u0022\\u003E\\u003Cstrong\\u003E[message:field-oa-node-ref:title]\\u003C\\/strong\\u003E\\u003C\\/a\\u003E",
          "format" : "panopoly_html_text",
          "safe_value" : "\\u003Cp\\u003E [message:timestamp:panopoly_time] \\u003Ca href=\\u0022\\/user\\/[message:user:uid]\\u0022\\u003E[message:user:name]\\u003C\\/a\\u003E created new [message:field-oa-node-ref:content-type]: \\u003Ca href=\\u0022\\/node\\/[message:field-oa-node-ref:nid]\\u0022\\u003E\\u003Cstrong\\u003E[message:field-oa-node-ref:title]\\u003C\\/strong\\u003E\\u003C\\/a\\u003E \\u003C\\/p\\u003E\\n"
        },
        {
          "value" : "[message:field-oa-message-text:value] [message:field-oa-node-ref:body]",
          "format" : "panopoly_html_text",
          "safe_value" : "\\u003Cp\\u003E [message:field-oa-message-text:value] [message:field-oa-node-ref:body] \\u003C\\/p\\u003E\\n"
        },
        {
          "value" : "\\u003Cp\\u003E\\u003Cspan\\u003E[message:field-oa-node-ref:body]\\u003C\\/span\\u003E\\u003C\\/p\\u003E",
          "format" : "panopoly_wysiwyg_text",
          "safe_value" : "\\u003Cp\\u003E\\u003Cspan\\u003E[message:field-oa-node-ref:body]\\u003C\\/span\\u003E\\u003C\\/p\\u003E\\n"
        }
      ]
    }
  }');
  $items['oa_delete'] = entity_import('message_type', '{
    "name" : "oa_delete",
    "description" : "Open Atrium Delete Content",
    "argument_keys" : [],
    "argument" : [],
    "category" : "message_type",
    "data" : { "purge" : { "override" : 0, "enabled" : 0, "quota" : "", "days" : "" } },
    "language" : "en",
    "arguments" : null,
    "message_text" : { "und" : [
        {
          "value" : "@{message:user:name} deleted: [message:field-deleted-title]",
          "format" : "plain_text",
          "safe_value" : "\\u003Cp\\u003E@{message:user:name} deleted: [message:field-deleted-title]\\u003C\\/p\\u003E\\n"
        },
        {
          "value" : "@{message:user:name} deleted [message:field-deleted-title]",
          "format" : "panopoly_html_text",
          "safe_value" : "\\u003Cp\\u003E @{message:user:name} deleted [message:field-deleted-title] \\u003C\\/p\\u003E\\n"
        },
        {
          "value" : "[message:timestamp:panopoly_time] \\u003Ca href=\\u0022\\/user\\/[message:user:uid]\\u0022\\u003E[message:user:name]\\u003C\\/a\\u003E deleted: [message:field-deleted-title]",
          "format" : "panopoly_html_text",
          "safe_value" : "\\u003Cp\\u003E [message:timestamp:panopoly_time] \\u003Ca href=\\u0022\\/user\\/[message:user:uid]\\u0022\\u003E[message:user:name]\\u003C\\/a\\u003E deleted: [message:field-deleted-title] \\u003C\\/p\\u003E\\n"
        },
        {
          "value" : "[message:field-deleted-summary:value]",
          "format" : "panopoly_html_text",
          "safe_value" : "\\u003Cp\\u003E [message:field-deleted-summary:value] \\u003C\\/p\\u003E\\n"
        },
        {
          "value" : "[message:field-deleted-summary:value]",
          "format" : "panopoly_html_text",
          "safe_value" : "\\u003Cp\\u003E [message:field-deleted-summary:value] \\u003C\\/p\\u003E\\n"
        }
      ]
    }
  }');
  $items['oa_member'] = entity_import('message_type', '{
    "name" : "oa_member",
    "description" : "Open Atrium Member",
    "argument_keys" : [],
    "argument" : [],
    "category" : "message_type",
    "data" : { "purge" : { "override" : 0, "enabled" : 0, "quota" : "", "days" : "" } },
    "language" : "en",
    "arguments" : null,
    "message_text" : { "und" : [
        {
          "value" : "[message:field-oa-message-group:title] : @{message:user:name} updated Group",
          "format" : "plain_text",
          "safe_value" : "\\u003Cp\\u003E[message:field-oa-message-group:title] : @{message:user:name} updated Group\\u003C\\/p\\u003E\\n"
        },
        {
          "value" : "[message:field-oa-message-group:title] : [message:field-oa-message-text:value]",
          "format" : "panopoly_html_text",
          "safe_value" : "\\u003Cp\\u003E [message:field-oa-message-group:title] : [message:field-oa-message-text:value] \\u003C\\/p\\u003E\\n"
        },
        {
          "value" : "[message:timestamp:panopoly_time] \\u003Ca href=\\u0022\\/user\\/[message:user:uid]\\u0022\\u003E[message:user:name]\\u003C\\/a\\u003E updated Group : \\u003Ca href=\\u0022\\/node\\/[message:field-oa-message-group:nid]\\u0022\\u003E[message:field-oa-message-group:title]\\u003C\\/a\\u003E",
          "format" : "panopoly_html_text",
          "safe_value" : "\\u003Cp\\u003E [message:timestamp:panopoly_time] \\u003Ca href=\\u0022\\/user\\/[message:user:uid]\\u0022\\u003E[message:user:name]\\u003C\\/a\\u003E updated Group : \\u003Ca href=\\u0022\\/node\\/[message:field-oa-message-group:nid]\\u0022\\u003E[message:field-oa-message-group:title]\\u003C\\/a\\u003E \\u003C\\/p\\u003E\\n"
        }
      ]
    }
  }');
  $items['oa_update'] = entity_import('message_type', '{
    "name" : "oa_update",
    "description" : "Open Atrium Update Content",
    "argument_keys" : [],
    "argument" : [],
    "category" : "message_type",
    "data" : { "purge" : { "override" : 0, "enabled" : 0, "quota" : "", "days" : "" } },
    "language" : "en",
    "arguments" : null,
    "message_text" : { "und" : [
        {
          "value" : "[message:field-oa-message-group] : [message:user:name] updated [message:field-oa-node-ref:content-type] : [message:field-oa-node-ref:title]",
          "format" : "plain_text",
          "safe_value" : "\\u003Cp\\u003E[message:field-oa-message-group] : [message:user:name] updated [message:field-oa-node-ref:content-type] : [message:field-oa-node-ref:title]\\u003C\\/p\\u003E\\n"
        },
        {
          "value" : "\\u003Cp\\u003E[message:field-oa-message-text:value]\\u0026nbsp;[message:field-oa-node-ref:log]\\u003C\\/p\\u003E\\u003Cp\\u003E[message:field-oa-node-ref:oa-diff:@{message:field-oa-node-ref:vid}]\\u003C\\/p\\u003E",
          "format" : "panopoly_wysiwyg_text",
          "safe_value" : "\\u003Cp\\u003E[message:field-oa-message-text:value]\\u00a0[message:field-oa-node-ref:log]\\u003C\\/p\\u003E\\n\\u003Cp\\u003E[message:field-oa-node-ref:oa-diff:@{message:field-oa-node-ref:vid}]\\u003C\\/p\\u003E\\n"
        },
        {
          "value" : "[message:timestamp:panopoly_time] \\u003Ca href=\\u0022\\/user\\/[message:user:uid]\\u0022\\u003E[message:user:name]\\u003C\\/a\\u003E updated [message:field-oa-node-ref:content-type] : \\u003Ca href=\\u0022\\/node\\/[message:field-oa-node-ref:nid]\\u0022\\u003E[message:field-oa-node-ref:title]\\u003C\\/a\\u003E",
          "format" : "panopoly_html_text",
          "safe_value" : "\\u003Cp\\u003E [message:timestamp:panopoly_time] \\u003Ca href=\\u0022\\/user\\/[message:user:uid]\\u0022\\u003E[message:user:name]\\u003C\\/a\\u003E updated [message:field-oa-node-ref:content-type] : \\u003Ca href=\\u0022\\/node\\/[message:field-oa-node-ref:nid]\\u0022\\u003E[message:field-oa-node-ref:title]\\u003C\\/a\\u003E \\u003C\\/p\\u003E\\n"
        },
        {
          "value" : "@{message:field-oa-node-ref:log}",
          "format" : "full_html",
          "safe_value" : "@{message:field-oa-node-ref:log}"
        },
        {
          "value" : "[message:field-oa-node-ref:oa-diff:@{message:field-oa-node-ref:vid}]",
          "format" : "panopoly_html_text",
          "safe_value" : "\\u003Cp\\u003E [message:field-oa-node-ref:oa-diff:@{message:field-oa-node-ref:vid}] \\u003C\\/p\\u003E\\n"
        }
      ]
    }
  }');
  return $items;
}