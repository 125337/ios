@interface WCFinderPhotoFeedDetailViewModel : NSObject
{
    BOOL _isPhotoFeed; // +0x8
    int _scene; // +0xc
    int _customScene; // +0x10
    id <WCFinderPhotoFeedDetailViewModelDelegate> _delegate; // +0x18
    WCFinderFeedContentVM * _contentVM; // +0x20
    unsigned long long _commentScene; // +0x28
    unsigned long long _commentSwitchType; // +0x30
    WCFinderContact * _finderContact; // +0x38
    NSString * _encryptedTid; // +0x40
    NSString * _tid; // +0x48
    NSString * _nonceID; // +0x50
}
- (id)initWithTid:(id)arg1 nonceID:(id)arg2 customScene:(int)arg3;
- (id)initWithEncryptedTid:(id)arg1 nonceID:(id)arg2 customScene:(int)arg3;
- (id)initWithTid:(id)arg1 encryptedTid:(id)arg2 nonceID:(id)arg3 customScene:(int)arg4;
- (void)startToLoadDataItem;
- (void)setupInitState;
- (void)setupWithDataItem:(id)arg1;
- (id)dataItem;
- (void)asyncFetchDataItemWithCompletion:(id /* block */)arg1;
- (void)_handleAsyncFetchError:(int)arg1 msg:(id)arg2;
- (void)updateLocalDataItem:(id /* block */)arg1;
- (BOOL)isSelfPostFeed;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)contentVM;
- (void)setContentVM:(id)arg1;
- (int)scene;
- (void)setScene:(int)arg1;
- (unsigned long long)commentScene;
- (void)setCommentScene:(unsigned long long)arg1;
- (unsigned long long)commentSwitchType;
- (void)setCommentSwitchType:(unsigned long long)arg1;
- (id)finderContact;
- (void)setFinderContact:(id)arg1;
- (int)customScene;
- (void)setCustomScene:(int)arg1;
- (id)encryptedTid;
- (void)setEncryptedTid:(id)arg1;
- (id)tid;
- (void)setTid:(id)arg1;
- (id)nonceID;
- (void)setNonceID:(id)arg1;
- (BOOL)isPhotoFeed;
- (void)setIsPhotoFeed:(BOOL)arg1;
- (void).cxx_destruct;
@end
