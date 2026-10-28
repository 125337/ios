@interface MultitalkMiniInAppTalkingInfo : NSObject
{
    MMConfSDKTalkingInfo * _talkingInfo; // +0x8
    WCVideoRender * _videoRender; // +0x10
}
- (id)initWithTalkingInfo:(id)arg1;
- (id)description;
- (id)talkingInfo;
- (void)setTalkingInfo:(id)arg1;
- (id)videoRender;
- (void)setVideoRender:(id)arg1;
- (void).cxx_destruct;
@end
