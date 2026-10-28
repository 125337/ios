@interface HDImageExpireReporter : NSObject
{
    int _openType; // +0x8
    int _closeType; // +0xc
    int _menuOpenType; // +0x10
    int _viewType; // +0x14
    NSMutableSet * _actionSheetItems; // +0x18
    CMessageWrap * _msgWrap; // +0x20
}
+ (id)chatInfoForReport:(id)arg1;
+ (void)reportClickMsg:(id)arg1;
+ (void)reportClickViewHDMsg:(id)arg1;
+ (void)reportSwitchToHDMsg:(id)arg1;
+ (void)reportShowExpireLabel:(id)arg1;
+ (void)reportShowPreviewAlbum:(id)arg1;
+ (void)reportClickPreviewAlbum:(id)arg1;
- (id)chatInfoForReport:(id)arg1;
- (void)reportClickSaveButton:(id)arg1 type:(int)arg2;
- (void)reportPreviewAlbum:(id)arg1 status:(int)arg2;
- (id)onEnterImagePage:(id)arg1;
- (void)reportPageChangeFrom:(id)arg1 to:(id)arg2;
- (id)onLeaveImagePage:(id)arg1;
- (id)commonReportInfo:(id)arg1;
- (id)commonReportInfoV2:(id)arg1;
- (void)reportActionSheetExpose:(id)arg1;
- (void)reportActionSheetButtonExpose:(id)arg1 buttonType:(int)arg2;
- (void)reportActionSheetButtonClick:(id)arg1 buttonType:(int)arg2;
- (void)reportActionSheetFooterExpose:(id)arg1;
- (void)reportActionSheetFooterClick:(id)arg1;
- (void)reportSaveActionSheetExpose:(id)arg1;
- (void)reportSaveActionSheetClick:(id)arg1;
- (void)reportSaveActionSheetCancel:(id)arg1;
- (int)openType;
- (void)setOpenType:(int)arg1;
- (int)closeType;
- (void)setCloseType:(int)arg1;
- (int)menuOpenType;
- (void)setMenuOpenType:(int)arg1;
- (int)viewType;
- (void)setViewType:(int)arg1;
- (id)actionSheetItems;
- (void)setActionSheetItems:(id)arg1;
- (id)msgWrap;
- (void)setMsgWrap:(id)arg1;
- (void).cxx_destruct;
@end
