@interface WAJSContextPlugin_EventQueue : WAJSContextPluginBase
{
    NSMutableArray * _arrViewDidAppearEvent; // +0x8
    NSMutableArray * _eventHandlersWhenIndexDataLoaded; // +0x10
    NSMutableArray * _arrNavigationViewDidAppearEvent; // +0x18
}
- (void)mainthread_addEventToViewDidAppearQueue:(id /* block */)arg1;
- (void)mainthread_handleEventInViewDidAppearQueue;
- (void)mainthread_addEventToNavigationViewDidAppearQueue:(id /* block */)arg1;
- (void)mainthread_handleEventInNavigationViewDidAppearQueue;
- (void)mainthread_addEventWhenIndexDataLoadedQueue:(id /* block */)arg1;
- (void)mainthread_handleEventWhenIndexDataLoadedQueue;
- (id)init;
- (void)dealloc;
- (void)anyThread_addEventToViewDidAppearQueue:(id /* block */)arg1;
- (id)anyThread_popAllEventInViewDidAppearQueue;
- (void)anyThread_addEventToNavigationViewDidAppearQueue:(id /* block */)arg1;
- (id)anyThread_popAllEventInNavigationViewDidAppearQueue;
- (void)anythread_addEventWhenIndexDataLoadedQueue:(id /* block */)arg1;
- (id)anyThread_popAllEventWhenIndexDataLoadedQueue;
- (void).cxx_destruct;
@end
