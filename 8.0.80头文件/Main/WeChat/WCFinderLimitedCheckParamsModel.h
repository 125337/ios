@interface WCFinderLimitedCheckParamsModel : NSObject
{
    BOOL _isChatRoom; // +0x8
    BOOL _isLive; // +0x9
    int _entryScene; // +0xc
    int _commentScene; // +0x10
    NSString * _feedId; // +0x18
    unsigned long long _shareScene; // +0x20
    WCFinderMessageShareNameCard * _nameCard; // +0x28
    NSString * _userName; // +0x30
    WCFinderContact * _contact; // +0x38
    WCFinderDataItem * _dataItem; // +0x40
}
- (id)feedId;
- (void)setFeedId:(id)arg1;
- (unsigned long long)shareScene;
- (void)setShareScene:(unsigned long long)arg1;
- (id)nameCard;
- (void)setNameCard:(id)arg1;
- (BOOL)isChatRoom;
- (void)setIsChatRoom:(BOOL)arg1;
- (id)userName;
- (void)setUserName:(id)arg1;
- (int)entryScene;
- (void)setEntryScene:(int)arg1;
- (id)contact;
- (void)setContact:(id)arg1;
- (int)commentScene;
- (void)setCommentScene:(int)arg1;
- (BOOL)isLive;
- (void)setIsLive:(BOOL)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (void).cxx_destruct;
@end
