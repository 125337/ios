@interface TextStatePublishOperateUseCase : NSObject
{
    BOOL _shouldShowRedDotForPublish; // +0x8
    int _publishActionSheetScene; // +0xc
    TextStateCardReporter * _cardReporter; // +0x10
    NSString * _passthroughIconId; // +0x18
    id /* block */ _onDeleteSuccessHandler; // +0x20
    NSString * _educationDescForPublish; // +0x28
    id /* block */ _textStateDynamicGetter; // +0x30
    id /* block */ _mediaViewDynamicGetter; // +0x38
    MMUIViewController * _curViewController; // +0x40
}
+ (void)stopMediaPlayingForStatusDeleteWithMediaView:(id)arg1;
- (id)initWithViewController:(id)arg1;
- (int)effectivePublishActionSheetScene:(BOOL)arg1;
- (id)__publishEntranceCustomParamsWithPublish2ndScene:(int)arg1;
- (void)__reportPublishEntranceEventWithEventId:(id)arg1 enterScene:(unsigned int)arg2 sessionId:(id)arg3 statusId:(id)arg4 username:(id)arg5 publish2ndScene:(int)arg6;
- (void)popupActionSheet:(id)arg1;
- (void)publishNewTextState;
- (void)editCurrentTextState;
- (void)__publishOrEditTextState:(id)arg1 useActionSheetScene:(BOOL)arg2;
- (void)openFlutterTextStatePublishPageWithEnterScene:(unsigned int)arg1 SessionId:(id)arg2 publish2ndScene:(int)arg3;
- (id)getSelfCurrentDisplayTextStateModel;
- (id)cardReporter;
- (void)setCardReporter:(id)arg1;
- (id)passthroughIconId;
- (void)setPassthroughIconId:(id)arg1;
- (id /* block */)onDeleteSuccessHandler;
- (void)setOnDeleteSuccessHandler:(id /* block */)arg1;
- (int)publishActionSheetScene;
- (void)setPublishActionSheetScene:(int)arg1;
- (BOOL)shouldShowRedDotForPublish;
- (void)setShouldShowRedDotForPublish:(BOOL)arg1;
- (id)educationDescForPublish;
- (void)setEducationDescForPublish:(id)arg1;
- (id /* block */)textStateDynamicGetter;
- (void)setTextStateDynamicGetter:(id /* block */)arg1;
- (id /* block */)mediaViewDynamicGetter;
- (void)setMediaViewDynamicGetter:(id /* block */)arg1;
- (id)curViewController;
- (void)setCurViewController:(id)arg1;
- (void).cxx_destruct;
@end
