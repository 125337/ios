@interface MMFinderLiveMoreFunctionItem : NSObject
{
    BOOL _enable; // +0x8
    BOOL _isSwitchDisabled; // +0x9
    unsigned int _detailNum; // +0xc
    unsigned long long _moreFunctionItemType; // +0x10
    unsigned long long _cellType; // +0x18
    NSString * _titleStr; // +0x20
    NSString * _detailStr; // +0x28
    UIColor * _detailStrColor; // +0x30
    NSString * _switchDisabledToastText; // +0x38
    NSString * _identifier; // +0x40
    double _height; // +0x48
    NSString * _imageUrl; // +0x50
    long long _reportSubElementId; // +0x58
    long long _moreFuncSubElementId; // +0x60
    NSString * _redDotPath; // +0x68
    NSString * _accessibilityIdentifier; // +0x70
    id _detailExtraInfo; // +0x78
}
- (id)initWithMoreFunctionItemType:(unsigned long long)arg1 cellType:(unsigned long long)arg2;
- (void)updateCellType:(unsigned long long)arg1;
- (BOOL)isSelectedShadow;
- (unsigned long long)moreFunctionItemType;
- (void)setMoreFunctionItemType:(unsigned long long)arg1;
- (unsigned long long)cellType;
- (void)setCellType:(unsigned long long)arg1;
- (id)titleStr;
- (void)setTitleStr:(id)arg1;
- (id)detailStr;
- (void)setDetailStr:(id)arg1;
- (id)detailStrColor;
- (void)setDetailStrColor:(id)arg1;
- (unsigned int)detailNum;
- (void)setDetailNum:(unsigned int)arg1;
- (BOOL)enable;
- (void)setEnable:(BOOL)arg1;
- (BOOL)isSwitchDisabled;
- (void)setIsSwitchDisabled:(BOOL)arg1;
- (id)switchDisabledToastText;
- (void)setSwitchDisabledToastText:(id)arg1;
- (id)identifier;
- (void)setIdentifier:(id)arg1;
- (double)height;
- (void)setHeight:(double)arg1;
- (id)imageUrl;
- (void)setImageUrl:(id)arg1;
- (long long)reportSubElementId;
- (void)setReportSubElementId:(long long)arg1;
- (long long)moreFuncSubElementId;
- (void)setMoreFuncSubElementId:(long long)arg1;
- (id)redDotPath;
- (void)setRedDotPath:(id)arg1;
- (id)accessibilityIdentifier;
- (void)setAccessibilityIdentifier:(id)arg1;
- (id)detailExtraInfo;
- (void)setDetailExtraInfo:(id)arg1;
- (void).cxx_destruct;
@end
