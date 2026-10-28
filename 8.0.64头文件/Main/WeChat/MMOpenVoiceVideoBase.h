@interface MMOpenVoiceVideoBase : UIView
{
    unsigned long long _subIndex; // +0x8
    long long _orientationBeforeEnterFullscreen; // +0x10
    unsigned int _videoId; // +0x18
    int _memberId; // +0x1c
    int _viewType; // +0x20
    long long _orientation; // +0x28
    id <MMOpenVoiceVideoViewDelegate> _delegate; // +0x30
    NSString * _openId; // +0x38
    CGRect _displayRect; // +0x40
}
- (id)init;
- (int)updateDisplayRectBy:(id)arg1;
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
- (void)setOrientation:(long long)arg1;
- (void)requestFullScreen:(int)arg1;
- (void)exitFullScreen;
- (void)enableFullScreen:(BOOL)arg1;
- (CGRect)videoFrame;
- (unsigned int)videoId;
- (void)setVideoId:(unsigned int)arg1;
- (long long)orientation;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (int)memberId;
- (void)setMemberId:(int)arg1;
- (id)openId;
- (void)setOpenId:(id)arg1;
- (int)viewType;
- (void)setViewType:(int)arg1;
- (CGRect)displayRect;
- (void)setDisplayRect:(CGRect)arg1;
- (void).cxx_destruct;
@end
