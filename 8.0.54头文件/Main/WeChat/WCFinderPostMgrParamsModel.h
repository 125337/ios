@interface WCFinderPostMgrParamsModel : NSObject
{
    int _userPrepareScene; // +0x8
    int _commentScene; // +0xc
    unsigned int _profileEnterType; // +0x10
    unsigned long long _enterScene; // +0x18
    unsigned long long _createFromType; // +0x20
    unsigned long long _createScene; // +0x28
    UIViewController * _currentVC; // +0x30
    id <WCFinderPostMgrDelegate> _delegate; // +0x38
    unsigned long long _shareScene; // +0x40
    unsigned long long _publisherEnteryType; // +0x48
}
- (id)init;
- (int)userPrepareScene;
- (void)setUserPrepareScene:(int)arg1;
- (unsigned long long)enterScene;
- (void)setEnterScene:(unsigned long long)arg1;
- (unsigned long long)createFromType;
- (void)setCreateFromType:(unsigned long long)arg1;
- (unsigned long long)createScene;
- (void)setCreateScene:(unsigned long long)arg1;
- (int)commentScene;
- (void)setCommentScene:(int)arg1;
- (id)currentVC;
- (void)setCurrentVC:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned int)profileEnterType;
- (void)setProfileEnterType:(unsigned int)arg1;
- (unsigned long long)shareScene;
- (void)setShareScene:(unsigned long long)arg1;
- (unsigned long long)publisherEnteryType;
- (void)setPublisherEnteryType:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

