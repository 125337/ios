@interface WCFinderFeedInputViewModel : NSObject <WCFinderFeedInputCommentPostDelegate>
{
    int _postScene; // +0x8
    NSString * _tid; // +0x10
    NSString * _nonceID; // +0x18
    unsigned long long _scene; // +0x20
    unsigned long long _identitySwitchType; // +0x28
    WCFinderComment * _replyComment; // +0x30
    CEmoticonWrap * _currentSelectedEmoticon; // +0x38
    UIImage * _currentSelectedImage; // +0x40
    WCFinderContact * _currentFinderContact; // +0x48
}
- (id)initWithTid:(id)arg1 nonceID:(id)arg2 currentFinderContact:(id)arg3;
- (unsigned long long)readIdentifyScene;
- (void)updateCurrentCommentScene;
- (void)asyncGenPostCommentWithContent:(id)arg1 emoticon:(id)arg2 image:(id)arg3 completion:(id /* block */)arg4;
- (id)generatePostCommentWithContent:(id)arg1;
- (id)currentUserName;
- (id)currentUserHeadURL;
- (id)currentUserNickName;
- (void)feedInputViewPostComment:(id)arg1 withReplyComment:(id)arg2;
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
- (void).cxx_destruct;
@end
