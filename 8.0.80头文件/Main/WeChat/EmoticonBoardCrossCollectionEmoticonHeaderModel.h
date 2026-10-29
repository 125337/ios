@interface EmoticonBoardCrossCollectionEmoticonHeaderModel : NSObject
{
    BOOL _hasReddot; // +0x8
    BOOL _isLayoutForExpand; // +0x9
    int _newPgae; // +0xc
    NSString * _title; // +0x10
    UIColor * _titleColor; // +0x18
    UIColor * _designerNameColor; // +0x20
    UIColor * _arrowColor; // +0x28
    NSString * _designerUin; // +0x30
    NSString * _packageId; // +0x38
    unsigned long long _index; // +0x40
}
- (id)description;
- (BOOL)isCustomPid;
- (BOOL)isSamePackage:(id)arg1;
- (BOOL)isSamePackageId:(id)arg1;
- (BOOL)isSameDesignerUin:(id)arg1;
- (BOOL)shouldRequestEmotionDetailForUpdate;
- (void)reportAction:(int)arg1 actionOnNewPid:(id)arg2;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)titleColor;
- (void)setTitleColor:(id)arg1;
- (id)designerNameColor;
- (void)setDesignerNameColor:(id)arg1;
- (id)arrowColor;
- (void)setArrowColor:(id)arg1;
- (id)designerUin;
- (void)setDesignerUin:(id)arg1;
- (id)packageId;
- (void)setPackageId:(id)arg1;
- (BOOL)hasReddot;
- (void)setHasReddot:(BOOL)arg1;
- (BOOL)isLayoutForExpand;
- (void)setIsLayoutForExpand:(BOOL)arg1;
- (int)newPgae;
- (void)setNewPgae:(int)arg1;
- (unsigned long long)index;
- (void)setIndex:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
