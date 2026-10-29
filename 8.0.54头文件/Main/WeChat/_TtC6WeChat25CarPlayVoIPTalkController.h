@interface _TtC6WeChat25CarPlayVoIPTalkController : _TtC6WeChat24CarPlayVoIPingController
{
     delegate; // +0x60
     durationLabel; // +0x68
}
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)durationLabel;
- (void)setDurationLabel:(id)arg1;
- (id)initWithContact:(id)arg1 toast:(id)arg2 isMuted:(BOOL)arg3 isVideo:(BOOL)arg4 isCaller:(BOOL)arg5;
- (void)updateButtonsWithIsMuted:(BOOL)arg1;
- (void)safeSetDelegateWithDelegate:(id)arg1;
- (id)initWithContact:(id)arg1 toast:(id)arg2;
- (void).cxx_destruct;
@end

