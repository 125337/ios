@interface FTSContactIndexInfo : NSObject <PBCoding>
{
    unsigned int _start; // +0x8
    unsigned int _end; // +0xc
    unsigned int _msgCount; // +0x10
    unsigned int _pageCount; // +0x14
    unsigned int _favMsgCount; // +0x18
    unsigned int _sessionCount; // +0x1c
    unsigned int _singleContactCount; // +0x20
    unsigned int _groupContactCount; // +0x24
}
+ (void)PBArrayAdd_start;
+ (void)PBArrayAdd_end;
+ (void)PBArrayAdd_msgCount;
+ (void)PBArrayAdd_pageCount;
+ (void)PBArrayAdd_favMsgCount;
+ (void)PBArrayAdd_sessionCount;
+ (void)PBArrayAdd_singleContactCount;
+ (void)PBArrayAdd_groupContactCount;
+ (void)initialize;
- (id)getPBPropertyTable;
- (unsigned int)start;
- (void)setStart:(unsigned int)arg1;
- (unsigned int)end;
- (void)setEnd:(unsigned int)arg1;
- (unsigned int)msgCount;
- (void)setMsgCount:(unsigned int)arg1;
- (unsigned int)pageCount;
- (void)setPageCount:(unsigned int)arg1;
- (unsigned int)favMsgCount;
- (void)setFavMsgCount:(unsigned int)arg1;
- (unsigned int)sessionCount;
- (void)setSessionCount:(unsigned int)arg1;
- (unsigned int)singleContactCount;
- (void)setSingleContactCount:(unsigned int)arg1;
- (unsigned int)groupContactCount;
- (void)setGroupContactCount:(unsigned int)arg1;
@end

