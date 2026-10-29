@interface PersonalCenterSingleTabInfo : NSObject
{
    NSString * _title; // +0x8
    NSNumber * _isSetting; // +0x10
    NSNumber * _cellName; // +0x18
    NSString * _h5Url; // +0x20
}
+ (id)makeWithTitle:(id)arg1 isSetting:(id)arg2 cellName:(id)arg3 h5Url:(id)arg4;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)isSetting;
- (void)setIsSetting:(id)arg1;
- (id)cellName;
- (void)setCellName:(id)arg1;
- (id)h5Url;
- (void)setH5Url:(id)arg1;
- (void).cxx_destruct;
@end
