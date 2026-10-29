@interface MMImageBrowserAIPSuggestionPresenter : NSObject
+ (id)xiaoweiSuggestionTextsForImageIntentType:(long long)arg1;
+ (id)suggestionCommandsForImageIntentType:(long long)arg1;
+ (void)presentIntentSelectionFromVC:(id)arg1 anchorView:(id)arg2 imageIntentType:(long long)arg3 menuPresentationHandler:(id /* block */)arg4 selectionHandler:(id /* block */)arg5;
+ (void)presentIntentSelectionFromVC:(id)arg1 anchorView:(id)arg2 imageIntentType:(long long)arg3 reportContext:(id)arg4 menuPresentationHandler:(id /* block */)arg5 selectionHandler:(id /* block */)arg6;
@end
