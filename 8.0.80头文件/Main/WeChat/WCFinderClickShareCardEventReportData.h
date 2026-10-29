@interface WCFinderClickShareCardEventReportData : NSObject
{
    BOOL _isHaveCover; // +0x8
    BOOL _isCGIEnd; // +0x9
    unsigned long long _scene; // +0x10
    unsigned long long _cardType; // +0x18
    NSString * _sourceUser; // +0x20
    NSString * _feedId; // +0x28
    NSString * _userName; // +0x30
    WCFinderTopicShareItem * _forwardItem; // +0x38
    long long _sourceCommentScene; // +0x40
    NSString * _collectionID; // +0x48
    double _shareSuccessTime; // +0x50
    NSString * _messageId; // +0x58
}
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (unsigned long long)cardType;
- (void)setCardType:(unsigned long long)arg1;
- (id)sourceUser;
- (void)setSourceUser:(id)arg1;
- (id)feedId;
- (void)setFeedId:(id)arg1;
- (id)userName;
- (void)setUserName:(id)arg1;
- (id)forwardItem;
- (void)setForwardItem:(id)arg1;
- (BOOL)isHaveCover;
- (void)setIsHaveCover:(BOOL)arg1;
- (BOOL)isCGIEnd;
- (void)setIsCGIEnd:(BOOL)arg1;
- (long long)sourceCommentScene;
- (void)setSourceCommentScene:(long long)arg1;
- (id)collectionID;
- (void)setCollectionID:(id)arg1;
- (double)shareSuccessTime;
- (void)setShareSuccessTime:(double)arg1;
- (id)messageId;
- (void)setMessageId:(id)arg1;
- (void).cxx_destruct;
@end
