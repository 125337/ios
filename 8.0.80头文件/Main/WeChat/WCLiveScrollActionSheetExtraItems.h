@interface WCLiveScrollActionSheetExtraItems : NSObject
{
    BOOL _isPreInsert; // +0x8
    unsigned long long _actionSheetRowNum; // +0x10
    NSArray * _actionSheetItemList; // +0x18
}
- (unsigned long long)actionSheetRowNum;
- (void)setActionSheetRowNum:(unsigned long long)arg1;
- (id)actionSheetItemList;
- (void)setActionSheetItemList:(id)arg1;
- (BOOL)isPreInsert;
- (void)setIsPreInsert:(BOOL)arg1;
- (void).cxx_destruct;
@end
