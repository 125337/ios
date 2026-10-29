@interface WCFinderPersonalCenterOftenContact : NSObject
{
    BOOL _hasGreenDot; // +0x8
    int _commentScene; // +0xc
    WCFinderContact * _contact; // +0x10
    FinderGetOftenReadAuthorResp_OftenReadAuthorItem * _item; // +0x18
    NSString * _reportUUID; // +0x20
    long long _itemIndex; // +0x28
}
- (id)contact;
- (void)setContact:(id)arg1;
- (id)item;
- (void)setItem:(id)arg1;
- (id)reportUUID;
- (void)setReportUUID:(id)arg1;
- (int)commentScene;
- (void)setCommentScene:(int)arg1;
- (long long)itemIndex;
- (void)setItemIndex:(long long)arg1;
- (BOOL)hasGreenDot;
- (void)setHasGreenDot:(BOOL)arg1;
- (void).cxx_destruct;
@end
