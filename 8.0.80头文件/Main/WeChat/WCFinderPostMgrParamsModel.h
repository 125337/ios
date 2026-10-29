@interface WCFinderPostMgrParamsModel : NSObject
{
    int _userPrepareScene; // +0x8
    int _commentScene; // +0xc
    int _profileEnterType; // +0x10
    unsigned long long _enterScene; // +0x18
    unsigned long long _createFromType; // +0x20
    unsigned long long _createScene; // +0x28
    UIViewController * _currentVC; // +0x30
    id <WCFinderPostMgrDelegate> _delegate; // +0x38
    unsigned long long _shareScene; // +0x40
    unsigned long long _publisherEnteryType; // +0x48
    FinderPostAttachExtInfo * _attachExtInfo; // +0x50
    NSString * _postBtnTitle; // +0x58
    NSString * _postTips; // +0x60
    NSString * _linkTips; // +0x68
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
- (int)profileEnterType;
- (void)setProfileEnterType:(int)arg1;
- (unsigned long long)shareScene;
- (void)setShareScene:(unsigned long long)arg1;
- (unsigned long long)publisherEnteryType;
- (void)setPublisherEnteryType:(unsigned long long)arg1;
- (id)attachExtInfo;
- (void)setAttachExtInfo:(id)arg1;
- (id)postBtnTitle;
- (void)setPostBtnTitle:(id)arg1;
- (id)postTips;
- (void)setPostTips:(id)arg1;
- (id)linkTips;
- (void)setLinkTips:(id)arg1;
- (void).cxx_destruct;
@end
