@interface AmoebaPageContext : NSObject
{
    AmoebaSubstitutePage * m_lastPage; // +0x8
    AmoebaSubstitutePage * m_curPage; // +0x10
    NSMutableDictionary * m_subPageMaps; // +0x18
    NSMutableDictionary * m_fullSubPageMap; // +0x20
    unsigned long long m_pageStep; // +0x28
    NSString * m_curBizId; // +0x30
    NSString * m_lastBizId; // +0x38
    NSString * m_lastClickViewId; // +0x40
    unsigned long long m_lastClickViewTime; // +0x48
    NSString * m_lastReportEventId; // +0x50
    NSString * m_enterMethod; // +0x58
    unsigned long long m_curAppInTime; // +0x60
    NSString * m_syncLastClickViewId; // +0x68
    NSMutableArray * m_syncPageStack; // +0x70
    NSMutableDictionary * m_contextIdWithBizIds; // +0x78
    NSMutableDictionary * m_contextIdWithSourceSessionIds; // +0x80
    NSMutableDictionary * m_sessionIdWithLastClickViewIds; // +0x88
    NSMutableDictionary * m_sessionIdMap; // +0x90
    NSMutableArray * m_sessionIdList; // +0x98
    NSMutableDictionary * m_subSessionIdList; // +0xa0
    NSMutableDictionary * m_sessionParams; // +0xa8
    AmoebaSubstitutePage * m_curBizPage; // +0xb0
    NSMutableDictionary * m_bizParams; // +0xb8
    NSMutableDictionary * m_nextBizParams; // +0xc0
    NSMutableDictionary * m_nextSessionParams; // +0xc8
    NSMutableArray * m_pagePaths; // +0xd0
}
- (id)init;
- (void)genContextId:(unsigned long long)arg1 sourceType:(unsigned long long)arg2;
- (id)getContextId:(unsigned long long)arg1 lastSessionCount:(unsigned long long)arg2;
- (void)clearContextId:(unsigned long long)arg1;
- (id)getAllContextIds:(unsigned long long)arg1;
- (id)getLastPage;
- (id)getCurPage;
- (id)getFullSubPage:(id)arg1;
- (id)getSubPages:(id)arg1;
- (void)addSubPage:(id)arg1 parentPage:(id)arg2;
- (void)removeSubPage:(id)arg1 parentPage:(id)arg2;
- (id)getCurBizId;
- (id)getLastBizId;
- (id)getLastClickViewId;
- (id)getLastReportEventId;
- (void)setLastReportEventId:(id)arg1;
- (id)getSessionIds;
- (id)getCustomSessionIds;
- (id)getPagePaths:(unsigned long long)arg1;
- (void)syncPageResume:(unsigned long long)arg1 pageId:(id)arg2;
- (id)getSyncCurPageId;
- (id)getSyncSourceViewId;
- (void)setSyncLastClickViewId:(id)arg1;
- (id)getSyncLastClickViewId;
- (void)setEnterMethod:(id)arg1;
- (id)getEnterMethod;
- (void)resetEnterMethod;
- (unsigned long long)getCurAppInTime;
- (void)setCurAppInTime:(unsigned long long)arg1;
- (id)getFinderLatestEnterMethod:(id)arg1;
- (void)setFinderLatestEnterMethod:(id)arg1 enterMethod:(id)arg2;
- (id)getBizParams:(id)arg1;
- (void)setBizParam:(id)arg1 key:(id)arg2 value:(id)arg3;
- (void)setBizParams:(id)arg1 params:(id)arg2;
- (void)removeBizParam:(id)arg1 key:(id)arg2;
- (void)clearBizParams:(id)arg1;
- (id)getCurBizParams;
- (id)getSessionParams:(id)arg1;
- (void)setSessionParam:(id)arg1 key:(id)arg2 value:(id)arg3;
- (void)setSessionParams:(id)arg1 params:(id)arg2;
- (void)removeSessionParam:(id)arg1 key:(id)arg2;
- (void)clearSessionParams:(id)arg1;
- (id)getCurSessionParams;
- (id)getNextBizParams:(id)arg1;
- (void)setNextBizParam:(id)arg1 key:(id)arg2 value:(id)arg3;
- (void)setNextBizParams:(id)arg1 params:(id)arg2;
- (void)setNextBizParams:(id)arg1 params:(id)arg2 nextBizGroupId:(unsigned long long)arg3;
- (void)removeNextBizParam:(id)arg1 key:(id)arg2;
- (void)clearNextBizParams:(id)arg1;
- (id)getNextSessionParams:(id)arg1;
- (void)setNextSessionParam:(id)arg1 key:(id)arg2 value:(id)arg3;
- (void)setNextSessionParams:(id)arg1 params:(id)arg2;
- (void)setNextSessionParams:(id)arg1 params:(id)arg2 nextPageId:(unsigned long long)arg3;
- (void)removeNextSessionParam:(id)arg1 key:(id)arg2;
- (void)clearNextSessionParams:(id)arg1;
- (void)viewClk:(id)arg1 time:(unsigned long long)arg2;
- (void)bizIn:(id)arg1 time:(unsigned long long)arg2;
- (void)bizOut:(id)arg1;
- (void)sessionIn:(id)arg1 time:(unsigned long long)arg2;
- (void)sessionOut:(id)arg1;
- (void)subSessionIn:(id)arg1;
- (void)subSessionOut:(id)arg1;
- (void)updatePage:(id)arg1 time:(unsigned long long)arg2;
- (void)subPageIn:(id)arg1 time:(unsigned long long)arg2;
- (void)subPageOut:(id)arg1;
- (void)clearPage:(id)arg1;
- (void)updatePageInfo:(id)arg1 eventId:(id)arg2;
- (void).cxx_destruct;
@end
