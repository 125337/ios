@interface WNTranslateLogic : NSObject <PBMessageObserverDelegate>
{
    long long m_textBeginIndex; // +0x8
    unsigned long long m_curIndex; // +0x10
    unsigned long long m_curLocation; // +0x18
    NSMutableDictionary * m_dataIdToIndexInfo; // +0x20
    NSMutableArray * m_fontAttributes; // +0x28
    NSMutableDictionary * m_sentenceSeqToAttachmentDic; // +0x30
    NSMutableDictionary * m_sentenceSeqToBreakStrDic; // +0x38
    NSMutableDictionary * m_sentenceStyleDic; // +0x40
    BOOL m_hasMoreContent; // +0x48
    NSMutableArray * m_translatedSentenceList; // +0x50
    BOOL _isFromTitleBtn; // +0x58
    BOOL _isServerAntiGarbage; // +0x59
    id <WNTranslateDelegate> _delegate; // +0x60
    WeNoteDataController * _dataController; // +0x68
    long long _translateState; // +0x70
}
- (id)init;
- (void)cancelTranslate;
- (void)clearState;
- (BOOL)checkPullNoticeScreenBefore;
- (void)initFontAttributes;
- (void)translate;
- (void)realTranslateWith:(id)arg1;
- (void)increaseBreakCountWithSentenceSeq:(unsigned long long)arg1;
- (void)confirmAttachmentSeperationInRange:(_NSRange)arg1 with:(id)arg2;
- (void)extractStyleOfSentence:(id)arg1 WithOriginRange:(_NSRange)arg2 sentenceList:(id)arg3;
- (void)rebuildContentStorage;
- (id)getTranslatedDataInfoWith:(id)arg1;
- (void)sendWebTranslationReqWith:(id)arg1;
- (void)handleWebTranslationResp:(id)arg1 Event:(unsigned int)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)dataController;
- (void)setDataController:(id)arg1;
- (long long)translateState;
- (void)setTranslateState:(long long)arg1;
- (BOOL)isFromTitleBtn;
- (void)setIsFromTitleBtn:(BOOL)arg1;
- (BOOL)isServerAntiGarbage;
- (void)setIsServerAntiGarbage:(BOOL)arg1;
- (void).cxx_destruct;
@end
