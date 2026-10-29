@interface WCFinderFeedInputViewModel : NSObject <WCFinderFeedInputCommentPostDelegate>
{
    BOOL _commentUsesVoiceInput; // +0x8
    int _postScene; // +0xc
    int _viewSceneForReport; // +0x10
    NSString * _tid; // +0x18
    NSString * _nonceID; // +0x20
    unsigned long long _scene; // +0x28
    unsigned long long _identitySwitchType; // +0x30
    WCFinderComment * _replyComment; // +0x38
    CEmoticonWrap * _currentSelectedEmoticon; // +0x40
    UIImage * _currentSelectedImage; // +0x48
    WCFinderContact * _currentFinderContact; // +0x50
}
- (id)initWithTid:(id)arg1 nonceID:(id)arg2 currentFinderContact:(id)arg3;
- (unsigned long long)readIdentifyScene;
- (void)updateCurrentCommentScene;
- (void)updateGetCommentScene:(int)arg1;
- (void)asyncGenPostCommentWithContent:(id)arg1 emoticon:(id)arg2 image:(id)arg3 completion:(id /* block */)arg4;
- (id)generatePostCommentWithContent:(id)arg1;
- (id)currentUserName;
- (id)currentUserHeadURL;
- (id)currentUserNickName;
- (void)feedInputViewPostComment:(id)arg1 withReplyComment:(id)arg2;
- (BOOL)commentUsesVoiceInput;
- (void)setCommentUsesVoiceInput:(BOOL)arg1;
- (id)tid;
- (void)setTid:(id)arg1;
- (id)nonceID;
- (void)setNonceID:(id)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (unsigned long long)identitySwitchType;
- (void)setIdentitySwitchType:(unsigned long long)arg1;
- (int)postScene;
- (void)setPostScene:(int)arg1;
- (id)replyComment;
- (void)setReplyComment:(id)arg1;
- (id)currentSelectedEmoticon;
- (void)setCurrentSelectedEmoticon:(id)arg1;
- (id)currentSelectedImage;
- (void)setCurrentSelectedImage:(id)arg1;
- (id)currentFinderContact;
- (void)setCurrentFinderContact:(id)arg1;
- (int)viewSceneForReport;
- (void)setViewSceneForReport:(int)arg1;
- (void).cxx_destruct;
@end
