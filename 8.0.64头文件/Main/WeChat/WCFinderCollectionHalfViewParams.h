@interface WCFinderCollectionHalfViewParams : NSObject
{
    BOOL _dismissSelfWhenJumpNewList; // +0x8
    int _commentScene; // +0xc
    FinderCollectionInfo * _collectionInfo; // +0x10
    FinderPaidCollectionInfo * _paidCollection; // +0x18
    WCFinderCollectionHalfViewDisplayInfo * _displayInfo; // +0x20
    NSString * _fromTid; // +0x28
    NSString * _finderUsername; // +0x30
    NSString * _dataScene; // +0x38
    id /* block */ _clickAction; // +0x40
}
+ (id)paramsWithCollectionInfo:(id)arg1 commentScene:(int)arg2 dataScene:(id)arg3;
+ (id)paramsWithPaidCollection:(id)arg1 commentScene:(int)arg2 dataScene:(id)arg3;
+ (id)paramsWithDisplayInfo:(id)arg1 commentScene:(int)arg2 dataScene:(id)arg3;
- (id)collectionInfo;
- (void)setCollectionInfo:(id)arg1;
- (id)paidCollection;
- (void)setPaidCollection:(id)arg1;
- (id)displayInfo;
- (void)setDisplayInfo:(id)arg1;
- (id)fromTid;
- (void)setFromTid:(id)arg1;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (int)commentScene;
- (void)setCommentScene:(int)arg1;
- (id)dataScene;
- (void)setDataScene:(id)arg1;
- (id /* block */)clickAction;
- (void)setClickAction:(id /* block */)arg1;
- (BOOL)dismissSelfWhenJumpNewList;
- (void)setDismissSelfWhenJumpNewList:(BOOL)arg1;
- (void).cxx_destruct;
@end
