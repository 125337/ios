@interface WCFinderPersonalCenterLiveActionHandle : NSObject <WCFinderPersonalCenterLiveActionHandle>
{
    NSString * _username; // +0x8
    NSString * _descriptionPromptWording; // +0x10
    WCFinderCreateLiveViewModel * _createLiveVM; // +0x18
    unsigned long long _liveStartEntrance; // +0x20
    unsigned long long _liveStartSourceScene; // +0x28
}
- (id)initWithCommentScene:(int)arg1 username:(id)arg2;
- (void)onPostActionViewClickLive:(id)arg1;
- (void)realStartLive:(id)arg1;
- (void)onPostActionViewExposeLive:(id)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)descriptionPromptWording;
- (void)setDescriptionPromptWording:(id)arg1;
- (id)createLiveVM;
- (void)setCreateLiveVM:(id)arg1;
- (unsigned long long)liveStartEntrance;
- (void)setLiveStartEntrance:(unsigned long long)arg1;
- (unsigned long long)liveStartSourceScene;
- (void)setLiveStartSourceScene:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
