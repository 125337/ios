@interface WCFinderScrollActionSheetItem : MMScrollActionSheetItem
{
    id /* block */ _selection; // +0x8
    unsigned long long _itemType; // +0x10
    NSMutableDictionary * _finderUserInfoDict; // +0x18
    long long _sectionType; // +0x20
    id /* block */ _reportSetter; // +0x28
}
+ (id)itemForFlag:(unsigned long long)arg1 withContentVM:(id)arg2;
+ (id)baseKey;
+ (id)playBackInfoKey;
- (id)reportEid;
- (id)udfDict;
- (id)sdkViewId;
- (id)sdkParamsDict;
- (id)playBackInfo;
- (void)setPlayBackInfo:(id)arg1;
- (void)clearPlayBackInfo;
- (id)description;
- (id /* block */)selection;
- (void)setSelection:(id /* block */)arg1;
- (unsigned long long)itemType;
- (void)setItemType:(unsigned long long)arg1;
- (id)finderUserInfoDict;
- (void)setFinderUserInfoDict:(id)arg1;
- (long long)sectionType;
- (void)setSectionType:(long long)arg1;
- (id /* block */)reportSetter;
- (void)setReportSetter:(id /* block */)arg1;
- (void).cxx_destruct;
@end
