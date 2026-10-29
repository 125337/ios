@interface FTSSessionMsgIndexReportInfo : NSObject
{
    BOOL _isIndexing; // +0x8
    BOOL _fts5Migrated; // +0x9
    unsigned int _msgMinLocalId; // +0xc
    unsigned int _msgMinCreateTime; // +0x10
    unsigned int _msgMaxLocalId; // +0x14
    unsigned int _msgMaxCreateTime; // +0x18
    unsigned int _preCursorTime; // +0x1c
    unsigned int _nextCursorTime; // +0x20
    unsigned int _indexedMsgCount; // +0x24
    unsigned int _unIndexedNewMsgCount; // +0x28
    unsigned int _unIndexedOldMsgCount; // +0x2c
    unsigned int _lastIndexTime; // +0x30
    unsigned int _memCacheMsgCount; // +0x34
    unsigned int _memCacheMinLocalId; // +0x38
    unsigned int _memCacheMaxLocalId; // +0x3c
    unsigned int _memCacheMinCreateTime; // +0x40
    unsigned int _memCacheMaxCreateTime; // +0x44
    unsigned long long _preCursor; // +0x48
    unsigned long long _nextCursor; // +0x50
    unsigned long long _totalMsgCount; // +0x58
}
- (BOOL)isIndexing;
- (void)setIsIndexing:(BOOL)arg1;
- (unsigned int)msgMinLocalId;
- (void)setMsgMinLocalId:(unsigned int)arg1;
- (unsigned int)msgMinCreateTime;
- (void)setMsgMinCreateTime:(unsigned int)arg1;
- (unsigned int)msgMaxLocalId;
- (void)setMsgMaxLocalId:(unsigned int)arg1;
- (unsigned int)msgMaxCreateTime;
- (void)setMsgMaxCreateTime:(unsigned int)arg1;
- (unsigned long long)preCursor;
- (void)setPreCursor:(unsigned long long)arg1;
- (unsigned long long)nextCursor;
- (void)setNextCursor:(unsigned long long)arg1;
- (unsigned int)preCursorTime;
- (void)setPreCursorTime:(unsigned int)arg1;
- (unsigned int)nextCursorTime;
- (void)setNextCursorTime:(unsigned int)arg1;
- (BOOL)fts5Migrated;
- (void)setFts5Migrated:(BOOL)arg1;
- (unsigned int)indexedMsgCount;
- (void)setIndexedMsgCount:(unsigned int)arg1;
- (unsigned int)unIndexedNewMsgCount;
- (void)setUnIndexedNewMsgCount:(unsigned int)arg1;
- (unsigned int)unIndexedOldMsgCount;
- (void)setUnIndexedOldMsgCount:(unsigned int)arg1;
- (unsigned int)lastIndexTime;
- (void)setLastIndexTime:(unsigned int)arg1;
- (unsigned int)memCacheMsgCount;
- (void)setMemCacheMsgCount:(unsigned int)arg1;
- (unsigned int)memCacheMinLocalId;
- (void)setMemCacheMinLocalId:(unsigned int)arg1;
- (unsigned int)memCacheMaxLocalId;
- (void)setMemCacheMaxLocalId:(unsigned int)arg1;
- (unsigned int)memCacheMinCreateTime;
- (void)setMemCacheMinCreateTime:(unsigned int)arg1;
- (unsigned int)memCacheMaxCreateTime;
- (void)setMemCacheMaxCreateTime:(unsigned int)arg1;
- (unsigned long long)totalMsgCount;
- (void)setTotalMsgCount:(unsigned long long)arg1;
@end
