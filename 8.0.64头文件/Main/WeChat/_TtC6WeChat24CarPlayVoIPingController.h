@interface _TtC6WeChat24CarPlayVoIPingController : _TtC6WeChat17CarPlayController
{
     contactTemplate; // +0x10
     roomID; // +0x18
     roomKey; // +0x28
     callRole; // +0x31
     contact; // +0x38
     type; // +0x40
     startTalkTime; // +0x48
     toast; // +0x50
}
- (long long)startTalkTime;
- (void)setStartTalkTime:(long long)arg1;
- (id)toast;
- (void)setToast:(id)arg1;
- (id)initWithContact:(id)arg1 toast:(id)arg2;
- (void)setRoomInfoWithRoomID:(long long)arg1 roomKey:(long long)arg2;
- (BOOL)isSameCallWithRoomID:(long long)arg1 roomKey:(long long)arg2;
- (void).cxx_destruct;
@end
