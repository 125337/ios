@interface EditImageXiaoWeiReportHelper : NSObject
{
    BOOL _hasAiInitiated; // +0x8
    BOOL _hasAiImgFilled; // +0x9
    BOOL _isFillImg; // +0xa
    BOOL _justFilledInXiaoWei; // +0xb
    unsigned long long _editSessionID; // +0x10
    unsigned long long _xiaoWeiPullCount; // +0x18
    unsigned long long _xiaoWeiFillCount; // +0x20
    NSString * _edgeImgLabel; // +0x28
    NSString * _xiaoWeiContent; // +0x30
    long long _xiaoWeiExpType; // +0x38
    double _lastHalfScreenDuration; // +0x40
    unsigned long long _enterTimestamp; // +0x48
    NSMutableSet * _fillActionSet; // +0x50
    NSString * _imageMd5; // +0x58
    unsigned long long _halfScreenOpenTimestamp; // +0x60
    NSMutableSet * _currActionSet; // +0x68
    NSMutableSet * _allActionSet; // +0x70
    unsigned long long _enterSource; // +0x78
    NSString * _editorAiId; // +0x80
    NSString * _editorActionsheetList; // +0x88
    long long _editorActionsheetLevel; // +0x90
    long long _editorActionsheetExpSource; // +0x98
}
+ (id)currentHelper;
+ (void)setCurrentHelper:(id)arg1;
+ (void)clearCurrentHelper;
+ (id)generateEditorAiId;
+ (unsigned long long)enterSourceForPickerScene:(int)arg1;
- (id)initWithEditSessionID:(unsigned long long)arg1;
- (void)onEditorEnter:(unsigned long long)arg1;
- (void)onEditorExit:(unsigned long long)arg1;
- (void)onXiaoWeiPulled;
- (void)onXiaoWeiFillBack;
- (void)onXiaoWeiReturn:(BOOL)arg1;
- (void)onXiaoWeiHalfScreenDuration:(double)arg1;
- (void)onEditOperation:(unsigned long long)arg1;
- (void)addEditAction:(unsigned long long)arg1;
- (void)setEdgeImgLabelFromLabelId:(unsigned int)arg1 labelName:(id)arg2;
- (id)genEditorEditId;
- (unsigned long long)currentTimestampMs;
- (void)reportIntoEditor:(unsigned long long)arg1;
- (void)reportXiaoWeiBtnViewExp;
- (void)reportXiaoWeiBtnViewClk;
- (void)reportActionSheetViewExp:(id)arg1 lv:(long long)arg2 expSource:(long long)arg3;
- (void)reportActionSheetViewClk:(id)arg1 lv:(long long)arg2 expSource:(long long)arg3 jumpToXiaoWei:(BOOL)arg4;
- (void)reportExtEditor:(unsigned long long)arg1;
- (unsigned long long)editSessionID;
- (void)setEditSessionID:(unsigned long long)arg1;
- (unsigned long long)xiaoWeiPullCount;
- (void)setXiaoWeiPullCount:(unsigned long long)arg1;
- (unsigned long long)xiaoWeiFillCount;
- (void)setXiaoWeiFillCount:(unsigned long long)arg1;
- (BOOL)hasAiInitiated;
- (void)setHasAiInitiated:(BOOL)arg1;
- (BOOL)hasAiImgFilled;
- (void)setHasAiImgFilled:(BOOL)arg1;
- (id)edgeImgLabel;
- (void)setEdgeImgLabel:(id)arg1;
- (id)xiaoWeiContent;
- (void)setXiaoWeiContent:(id)arg1;
- (long long)xiaoWeiExpType;
- (void)setXiaoWeiExpType:(long long)arg1;
- (double)lastHalfScreenDuration;
- (void)setLastHalfScreenDuration:(double)arg1;
- (unsigned long long)enterTimestamp;
- (void)setEnterTimestamp:(unsigned long long)arg1;
- (BOOL)isFillImg;
- (void)setIsFillImg:(BOOL)arg1;
- (id)fillActionSet;
- (void)setFillActionSet:(id)arg1;
- (id)imageMd5;
- (void)setImageMd5:(id)arg1;
- (BOOL)justFilledInXiaoWei;
- (void)setJustFilledInXiaoWei:(BOOL)arg1;
- (unsigned long long)halfScreenOpenTimestamp;
- (void)setHalfScreenOpenTimestamp:(unsigned long long)arg1;
- (id)currActionSet;
- (void)setCurrActionSet:(id)arg1;
- (id)allActionSet;
- (void)setAllActionSet:(id)arg1;
- (unsigned long long)enterSource;
- (void)setEnterSource:(unsigned long long)arg1;
- (id)editorAiId;
- (void)setEditorAiId:(id)arg1;
- (id)editorActionsheetList;
- (void)setEditorActionsheetList:(id)arg1;
- (long long)editorActionsheetLevel;
- (void)setEditorActionsheetLevel:(long long)arg1;
- (long long)editorActionsheetExpSource;
- (void)setEditorActionsheetExpSource:(long long)arg1;
- (void).cxx_destruct;
@end
