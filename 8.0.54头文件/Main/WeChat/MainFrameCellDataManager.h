@interface MainFrameCellDataManager : MMUserService <IContactMgrExt, IGroupMgrExt, MultiTalkMgrExt, IMMFontMgrExt, IMMLanguageMgrExt, MMServiceProtocol>
{
    NSMutableDictionary * m_dictMainFrameCellData; // +0x8
    LSMFileStorage * m_fileStorage; // +0x10
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)reLoadLSMFileStorage;
- (void)clearOldVersionCellDataFile;
- (id)getCellData:(id)arg1;
- (void)saveCellData:(id)arg1;
- (void)batchSaveCellDatas:(id)arg1;
- (id)updateCellData:(id)arg1;
- (void)cleanupAllCache;
- (id)getCellDataByUsrName:(id)arg1;
- (void)removeCellData:(id)arg1;
- (void)updateTimeFieldForCellData;
- (void)onModifyContact:(id)arg1;
- (void)onMultiTalkMsgCellIconChange:(id)arg1;
- (void)onFontSizeChange;
- (void)onLanguageChange;
- (void)onBoldTextStatusChanged;
- (void).cxx_destruct;
@end

