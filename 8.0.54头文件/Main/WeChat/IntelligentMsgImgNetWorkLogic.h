@interface IntelligentMsgImgNetWorkLogic : NSObject <PBMessageObserverDelegate>
{
    id <IntelligentMsgImgNetWorkLogicDelegate> _m_delegate; // +0x8
}
- (void)getSimilarWordsWithQuery:(id)arg1;
- (void)onGetSimilarWordsWithQuery:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (void).cxx_destruct;
@end

