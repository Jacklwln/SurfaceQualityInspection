#include <menu_plugin/ui_action/MenuStatusControl.h>
#include <menu_plugin/ui_action/menu_context_event_item.h>
namespace lq
{

#if defined(_MSC_VER)
menu_context_event_item::menu_context_event_item(QWidget *parent) : QMenu(parent)
#else if defined (__GNUC__)
menu_context_event_item::menu_context_event_item(QWidget *parent = 0) : QMenu(parent)
#endif
{
  context_menu_handle_.reset(new Ui::ui_menu_context_event());
  context_menu_handle_->setup_ui(this);
  
}

menu_context_event_item::~menu_context_event_item()
{
  
}

//------------------------------------------------------------------------------



}
