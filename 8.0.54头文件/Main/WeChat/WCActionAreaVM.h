@interface WCActionAreaVM : NSObject
{
    BOOL _enabledWrap; // +0x8
    BOOL _isDynamicTagEnabled; // +0x9
    BOOL _isStarEnabled; // +0xa
    WCDataItem * _dataItem; // +0x10
    OrderedDictionary * _layoutInfoMap; // +0x18
    WCActionAreaVMParams * _params; // +0x20
    NSArray * _elementTypes; // +0x28
    NSArray * _elementArr; // +0x30
    NSMutableArray * _elementsRowInfo; // +0x38
    unsigned long long _scene; // +0x40
}
+ (id)timeLabelDisplayTextWithDataItem:(id)arg1 scene:(unsigned long long)arg2;
+ (BOOL)canShowStarIconWithDataItem:(id)arg1 scene:(unsigned long long)arg2 isStarEnabled:(BOOL)arg3;
+ (BOOL)canShowSourceWithDataItem:(id)arg1 showType:(unsigned long long *)arg2 text:(id *)arg3 url:(id *)arg4 backupUrl:(id *)arg5;
+ (BOOL)canShowWeAppInfoWithDataItem:(id)arg1;
+ (BOOL)canShowShareGroupButtonWithDataItem:(id)arg1 isDynamicTagEnabled:(BOOL)arg2;
+ (BOOL)canShowDeleteButtonWithDataItem:(id)arg1;
+ (id)weAppLabelDisplayTextWithAppUsername:(id)arg1;
+ (BOOL)shouldFetchWeAppContactWithAppUsername:(id)arg1;
- (id)initWithDataItem:(id)arg1 enabledWrap:(BOOL)arg2 scene:(unsigned long long)arg3 isDynamicTagEnabled:(BOOL)arg4 isStarEnabled:(BOOL)arg5;
- (id)elementTypesAtRow:(unsigned long long)arg1;
- (unsigned long long)totalLine;
- (BOOL)enabledWrap;
- (void)calculateLayoutInfoWithParams:(id)arg1;
- (void)adjustElementsForOneLine;
- (void)adjustElementsForMultiLine;
- (BOOL)canDisplayForOneLine;
- (double)totalMinWidth;
- (void)setupActionAreaElements;
- (id)createElementWraps;
- (id)createElementsRowInfo;
- (void)prepareDisplayElements;
- (id)timeLabelDisplayText;
- (BOOL)canShowStarIcon;
- (BOOL)canShowSource;
- (unsigned long long)sourceShowType;
- (id)sourceText;
- (id)sourceUrl;
- (id)sourceBackupUrl;
- (BOOL)canShowWeAppInfo;
- (id)weAppLabelDisplayText;
- (BOOL)shouldFetchWeAppContact;
- (BOOL)canShowShareGroupButton;
- (BOOL)canShowDeleteButton;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)displayElementsHashString;
- (id)dataItem;
- (void)setEnabledWrap:(BOOL)arg1;
- (id)layoutInfoMap;
- (void)setLayoutInfoMap:(id)arg1;
- (id)params;
- (void)setParams:(id)arg1;
- (id)elementTypes;
- (void)setElementTypes:(id)arg1;
- (id)elementArr;
- (void)setElementArr:(id)arg1;
- (id)elementsRowInfo;
- (void)setElementsRowInfo:(id)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (BOOL)isDynamicTagEnabled;
- (void)setIsDynamicTagEnabled:(BOOL)arg1;
- (BOOL)isStarEnabled;
- (void)setIsStarEnabled:(BOOL)arg1;
- (void).cxx_destruct;
@end

