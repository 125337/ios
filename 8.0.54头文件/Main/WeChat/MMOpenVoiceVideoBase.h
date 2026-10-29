@interface MMOpenVoiceVideoBase : UIView
{
    unsigned int _videoId; // +0x8
    int _memberId; // +0xc
    int _viewType; // +0x10
    NSString * _openId; // +0x18
}
- (id)init;
- (int)initView:(int)arg1 openId:(id)arg2 dic:(id)arg3 queue:(id)arg4;
- (int)updateView:(int)arg1 dic:(id)arg2;
- (void)render:(char *)arg1 dataLen:(int)arg2 width:(int)arg3 height:(int)arg4 rotation:(int)arg5;
- (void)uintView;
- (void)updateMemberId:(int)arg1;
- (void)updateViewType:(int)arg1;
- (BOOL)isCamera;
- (BOOL)isVideo;
- (BOOL)isScreen;
- (int)getMemberId;
- (id)getOpenId;
- (int)getViewType;
- (unsigned int)videoId;
- (void)setVideoId:(unsigned int)arg1;
- (int)memberId;
- (void)setMemberId:(int)arg1;
- (id)openId;
- (void)setOpenId:(id)arg1;
- (int)viewType;
- (void)setViewType:(int)arg1;
- (void).cxx_destruct;
@end

