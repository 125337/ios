@interface MessagePatternWrap : NSObject
{
    NSMutableArray * m_arrPatternList; // +0x8
    BOOL m_bChange; // +0x10
    NSString * m_nsChatName; // +0x18
    NSObject<OS_dispatch_queue> * m_worker; // +0x20
}
+ (id)GetPathOfPatternCacheWithPb:(id)arg1;
+ (BOOL)isBrandContactMsg:(id)arg1;
+ (long long)getParserType:(id)arg1;
- (id)initWithChatName:(id)arg1 andWorker:(id)arg2;
- (void)dealloc;
- (void)LoadFromFile;
- (void)doSaveToFile:(id)arg1 path:(id)arg2;
- (void)SaveToFile;
- (void)RemoveFromFile;
- (id)GetPattern:(id)arg1;
- (void)SetPattern:(id)arg1;
- (void)DelMsg:(id)arg1;
- (void)DelMsgPatten:(id)arg1;
- (id)m_arrPatternList;
- (void)setM_arrPatternList:(id)arg1;
- (BOOL)m_bChange;
- (void)setM_bChange:(BOOL)arg1;
- (id)m_nsChatName;
- (void)setM_nsChatName:(id)arg1;
- (void).cxx_destruct;
@end

