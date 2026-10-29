@interface QStyleManager : NSObject
{
    QMediator * _mediator; // +0x8
    QMapContext * _mapContext; // +0x10
    QUniversalMapCounter * _universalCounter; // +0x18
    QStatisticer * _styleStatisticer; // +0x20
    NSString * _businessKey; // +0x28
    NSString * _configDirectoryPath; // +0x30
    NSString * _stylePlistPath; // +0x38
    NSArray * _styleList; // +0x40
    long long _styleOrder; // +0x48
}
- (BOOL)isNightMapStyle;
- (id)getStyleIDString;
- (long long)getCustomStyleOrder;
- (void)setStyleIndex:(long long)arg1 withModifyOrder:(BOOL)arg2;
- (void)updateMapStyleData:(id)arg1;
- (void)resetMapStyleData;
- (id)resolveStyleJSONList:(id)arg1;
- (void)recordCustomStyleStats:(long long)arg1;
- (id)initWithConfigPreference:(id)arg1;
- (void)setupStylePlist;
- (void)setupStyleList;
- (id)mediator;
- (void)setMediator:(id)arg1;
- (id)mapContext;
- (void)setMapContext:(id)arg1;
- (id)universalCounter;
- (void)setUniversalCounter:(id)arg1;
- (id)styleStatisticer;
- (void)setStyleStatisticer:(id)arg1;
- (id)businessKey;
- (void)setBusinessKey:(id)arg1;
- (id)configDirectoryPath;
- (void)setConfigDirectoryPath:(id)arg1;
- (id)stylePlistPath;
- (void)setStylePlistPath:(id)arg1;
- (id)styleList;
- (void)setStyleList:(id)arg1;
- (long long)styleOrder;
- (void)setStyleOrder:(long long)arg1;
- (void).cxx_destruct;
@end

