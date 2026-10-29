@interface _TtC6WeChat25CarPlayVoIPCallController : _TtC6WeChat24CarPlayVoIPingController
{
    void * delegate; // +0x60
}
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)initWithContact:(id)arg1 toast:(id)arg2 isMuted:(BOOL)arg3 isVideo:(BOOL)arg4;
- (void)updateButtonsWithIsMuted:(BOOL)arg1;
- (void)setRoomInfoWithRoomID:(long long)arg1 roomKey:(long long)arg2;
- (id)initWithContact:(id)arg1 toast:(id)arg2;
- (void).cxx_destruct;
@end
