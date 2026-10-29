@interface WeNoteDataController : MMObject <WNTextViewDataDelegate, WNContentStorageBuilderDelegate, IFavoritesRepairSvrDataExt, IFavoritesExt, IRecordDownloadExt, IMsgExt, IFavCdnDownloadMgrExt, RTESectionMgrDelegate, GroupNoticeDownloadExt, WNSaveImageLogicDataSource, UITableViewDataSource, UITableViewDelegate, UITextViewDelegate, IWNAudioMgrExt, WNSaveImageResourceMgrExt>
{
    WNContentStorageBuilder * m_contentBuilder; // +0x8
    unsigned int m_maxObjectId; // +0x10
    BOOL m_didScroll; // +0x14
    BOOL m_enableRecordScroll; // +0x15
    NSMutableArray * m_operationRecord; // +0x18
    int m_operationIndex; // +0x20
    BOOL m_isPreDelete; // +0x24
    NSString * m_downloadingHtmlUrl; // +0x28
    BOOL m_hasMoreContent; // +0x30
    BOOL m_waitForUpload; // +0x31
    BOOL m_onDelete; // +0x32
    BOOL m_onDeleteAttachView; // +0x33
    BOOL m_lastLanguageIsCN; // +0x34
    NSMutableArray * m_lazyDownloadDatas; // +0x38
    BOOL m_enableLazyDownload; // +0x40
    FavoritesItemDataField * m_openingData; // +0x48
    BOOL _bEditable; // +0x50
    BOOL _bEdited; // +0x51
    BOOL _bFromPreView; // +0x52
    BOOL _hasReportedTextEditOperation; // +0x53
    FavDataItemWrap * _dataWrap; // +0x58
    FavoritesItem * _favItem; // +0x60
    CMessageWrap * _messageWrap; // +0x68
    WCDataItem * _wcDataItem; // +0x70
    WNContentStorage * _contentStorage; // +0x78
    WNContentStorage * _oldContentStorage; // +0x80
    RTESectionMgr * _sectionMgr; // +0x88
    RTETextView * _firstResponder; // +0x90
    id <WeNoteDataControllerDelegate><WNTextViewOperationDelegate> _delegate; // +0x98
    NSNumber * _boldOnNextInput; // +0xa0
    NSNumber * _highlightOnNextInput; // +0xa8
    long long _locationForDeleteFrontBR; // +0xb0
    long long _locationForDeleteForwardBR; // +0xb8
    _NSRange _selectedRange; // +0xc0
}
- (void)onReplaceTextInRange:(_NSRange)arg1 withText:(id)arg2 inTextView:(id)arg3;
- (BOOL)updateBoldOrHighlightOnRange:(_NSRange)arg1;
- (BOOL)containBackgroundColorForNewLineInRange:(_NSRange)arg1 withText:(id)arg2 inTextView:(id)arg3;
- (BOOL)canSelectAll;
- (void)selectAll;
- (void)setBoldEnableOnSelectedContent:(BOOL)arg1;
- (void)setHighlightEnableOnSelectedContent:(BOOL)arg1;
- (void)updateTypingAttribute;
- (void)copySelectedContent;
- (void)cutSelectedContent;
- (void)deleteSelectedContent;
- (void)pasteSelectedContent;
- (void)pasteContent:(id)arg1 withSession:(id)arg2;
- (void)moveContentAtRange:(_NSRange)arg1;
- (void)editSelectedContent;
- (void)setListType:(unsigned int)arg1 isEnable:(BOOL)arg2;
- (BOOL)setListType:(unsigned int)arg1 isEnable:(BOOL)arg2 onParagraphRange:(_NSRange)arg3 withChangeLength:(int *)arg4;
- (void)insertText:(id)arg1;
- (id)generateContentStorageWithAttributes:(id)arg1;
- (void)insertAttributes:(id)arg1;
- (BOOL)needHandleListContentChangeInRange:(_NSRange)arg1 withText:(id)arg2;
- (void)handleReplaceListContentInRange:(_NSRange)arg1 withText:(id)arg2;
- (BOOL)needSetHeadIndexTo1WhenInsertOrderListNodesAt:(unsigned long long)arg1;
- (id)findNextOrderListHeadIfNeedHandleWithRange:(_NSRange)arg1;
- (void)onEditOrderListWith:(id)arg1;
- (void)confirmAttachmentSeperationInRange:(_NSRange)arg1 withText:(id)arg2 leftInserted:(BOOL *)arg3 rightInserted:(BOOL *)arg4;
- (void)setSmallImageEnable:(BOOL)arg1;
- (id)setSmallImageMode:(BOOL)arg1 onContent:(id)arg2;
- (void)handleSectionChange:(id)arg1 withNewSelectionRange:(_NSRange)arg2;
- (id)getCurrentViewController;
- (void)onAccessiblityBecomeFocus:(id)arg1;
- (void)onOpenTopicWithUrl:(id)arg1;
- (BOOL)isNomalLineHeightAtPosition:(id)arg1 with:(id)arg2;
- (id)getMessageWrap;
- (id)getFavItem;
- (id)getWCDataItem;
- (void)insertContentStorage:(id)arg1;
- (BOOL)checkNeedCancelListStyle;
- (void)OnEndWNAudioRecordWithObj:(id)arg1 FilePath:(id)arg2 VoiceTime:(float)arg3 VoiceFmt:(unsigned int)arg4;
- (void)startEditRange:(_NSRange)arg1;
- (void)endEditRange:(_NSRange)arg1;
- (void)onUndo;
- (void)onRedo;
- (BOOL)canUndo;
- (BOOL)canRedo;
- (id)init;
- (void)dealloc;
- (void)configMsg:(id)arg1;
- (void)configWithMsg:(id)arg1 andData:(id)arg2;
- (void)configWCDataItem:(id)arg1;
- (void)configWithDataWrap:(id)arg1;
- (void)configGroupNoticeItem:(id)arg1;
- (void)configFavItem:(id)arg1;
- (id)dataWrap;
- (void)setSelectedRange:(_NSRange)arg1;
- (void)loadFavItem:(id)arg1 withContent:(id)arg2 withSectionMgr:(id)arg3;
- (BOOL)checkMsgFile;
- (void)tryStartParseHtml;
- (void)saveWithHandler:(id /* block */)arg1;
- (void)setBEditable:(BOOL)arg1;
- (BOOL)isEmpty;
- (BOOL)hasMoreData;
- (void)beginRecordScrollState;
- (BOOL)checkDidScroll;
- (double)getTotalSectionHeight;
- (id)firstResponder;
- (void)resetOnDelete;
- (void)setOnDelete;
- (void)setBEdited:(BOOL)arg1;
- (void)clearLocationForDeleteBR;
- (void)tryToDownloadLargeFileWith:(id)arg1;
- (BOOL)isDataNeedLazyDownload:(id)arg1;
- (void)onOpenAttachmentWith:(id)arg1;
- (void)didControllerAppear;
- (unsigned int)enterNoteScene;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)textViewDidChangeSelection:(id)arg1;
- (BOOL)textView:(id)arg1 shouldChangeTextInRange:(_NSRange)arg2 replacementText:(id)arg3;
- (BOOL)textViewShouldEndEditing:(id)arg1;
- (void)tryToCheckLinkWith:(id)arg1;
- (void)onSectionAtIndex:(unsigned long long)arg1 heightIncreased:(double)arg2;
- (id)creatRTETextView;
- (id)creatRTETextViewWithCustomFrame:(CGRect)arg1;
- (id)creatRTETextViewWithCustomFrame:(CGRect)arg1 andTextContainerInset:(UIEdgeInsets)arg2;
- (void)onSetHeadAttribute:(id)arg1;
- (void)onGenerateContentStorage:(id)arg1;
- (void)onGenerationFinish;
- (void)OnFavCdnDownload:(id)arg1 RetCode:(int)arg2;
- (BOOL)chectHTMLWithDataId:(id)arg1 isSuccess:(BOOL)arg2;
- (void)OnAddNewFavoritesItems:(id)arg1;
- (void)OnUpdateItems:(id)arg1;
- (void)OnDelFavoritesItems:(id)arg1;
- (void)OnNoteSecurityCheck:(unsigned int)arg1 isSuccess:(BOOL)arg2;
- (void)downloadResourceSuccess:(unsigned int)arg1;
- (void)downloadResourceFail:(unsigned int)arg1;
- (void)downloadResourceNone:(unsigned int)arg1;
- (void)OnDownloadRecordMessageOK:(id)arg1 DataId:(id)arg2 bThumb:(BOOL)arg3;
- (void)OnDownloadRecordMessageExpired:(id)arg1 DataId:(id)arg2;
- (void)OnDownloadRecordMessageFail:(id)arg1 DataId:(id)arg2 failRetCode:(int)arg3;
- (void)onRepairCheckFavItemAvailable:(unsigned int)arg1 occupied:(BOOL *)arg2;
- (void)onChatNewMsgSent:(id)arg1;
- (void)OnMsgDownloadAppAttachSuccess:(id)arg1 MsgWrap:(id)arg2;
- (void)onGroupNoticeDownloadItem:(id)arg1 retCode:(int)arg2;
- (void)matchQuery:(id)arg1 onAttachmentWithRange:(_NSRange)arg2 searchResultInfoArr:(id)arg3;
- (id)searchContentWith:(id)arg1;
- (void)findMatchLocationsWith:(id)arg1 query:(id)arg2 content:(id)arg3 isFromDesc:(BOOL)arg4;
- (void)addAttachmentInfoTo:(id)arg1 with:(id)arg2;
- (void)reBuildContentWithNewContentStorage:(id)arg1 saveOld:(BOOL)arg2;
- (id)getAttachmentViewProviderForLongImageUtilWithDarkMode;
- (id)getAttachmentViewProviderForLongImageUtilWithLightMode;
- (id)getAttachmentViewProviderForLongImageUtilWithTransparentMode;
- (id)getAttachmentViewProviderForSquareImageUtilWithDarkMode;
- (id)getAttachmentViewProviderForSquareImageUtilWithLightMode;
- (id)getAttachmentViewProviderForSquareImageUtilWithTransparentMode;
- (BOOL)bEditable;
- (BOOL)bEdited;
- (BOOL)bFromPreView;
- (void)setBFromPreView:(BOOL)arg1;
- (_NSRange)selectedRange;
- (id)favItem;
- (void)setFavItem:(id)arg1;
- (id)messageWrap;
- (id)wcDataItem;
- (id)contentStorage;
- (void)setContentStorage:(id)arg1;
- (id)oldContentStorage;
- (void)setOldContentStorage:(id)arg1;
- (id)sectionMgr;
- (void)setSectionMgr:(id)arg1;
- (void)setFirstResponder:(id)arg1;
- (BOOL)hasReportedTextEditOperation;
- (void)setHasReportedTextEditOperation:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)boldOnNextInput;
- (void)setBoldOnNextInput:(id)arg1;
- (id)highlightOnNextInput;
- (void)setHighlightOnNextInput:(id)arg1;
- (long long)locationForDeleteFrontBR;
- (void)setLocationForDeleteFrontBR:(long long)arg1;
- (long long)locationForDeleteForwardBR;
- (void)setLocationForDeleteForwardBR:(long long)arg1;
- (void).cxx_destruct;
@end

