@interface WCFinderMarkMarkReadStatModel : NSObject <PBCoding>
{
    BOOL _autoPlayWithSound; // +0x8
    int _commentScene; // +0xc
    NSString * _tid; // +0x10
    unsigned long long _markReadScene; // +0x18
    unsigned long long _markReadSubScene; // +0x20
    long long _actionType; // +0x28
    NSString * _sessionBuffer; // +0x30
    unsigned long long _duration; // +0x38
    unsigned long long _index; // +0x40
    unsigned long long _areaId; // +0x48
    unsigned long long _autoPlayTimeMs; // +0x50
    unsigned long long _startExposeMs; // +0x58
    unsigned long long _effectiveExposeTimeMs; // +0x60
    unsigned long long _startEffectiveExposeTimeMs; // +0x68
}
+ (void)PBArrayAdd_tid;
+ (void)PBArrayAdd_markReadScene;
+ (void)PBArrayAdd_markReadSubScene;
+ (void)PBArrayAdd_commentScene;
+ (void)PBArrayAdd_sessionBuffer;
+ (void)PBArrayAdd_duration;
+ (void)PBArrayAdd_index;
+ (void)PBArrayAdd_autoPlayTimeMs;
+ (void)PBArrayAdd_autoPlayWithSound;
+ (void)PBArrayAdd_actionType;
+ (void)PBArrayAdd_areaId;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)initWithScene:(unsigned long long)arg1 subScene:(unsigned long long)arg2 tid:(id)arg3 commentScene:(int)arg4 sessionBuffer:(id)arg5;
- (id)initWithScene:(unsigned long long)arg1 subScene:(unsigned long long)arg2 tid:(id)arg3 commentScene:(int)arg4 sessionBuffer:(id)arg5 duration:(long long)arg6;
- (id)initWithScene:(unsigned long long)arg1 subScene:(unsigned long long)arg2 tid:(id)arg3 commentScene:(int)arg4 sessionBuffer:(id)arg5 duration:(long long)arg6 autoPlayTimeMs:(unsigned long long)arg7 autoPlayWithSound:(BOOL)arg8 startExposeMs:(unsigned long long)arg9 actionType:(long long)arg10 effectiveExposeTimeMs:(unsigned long long)arg11 startEffectiveExposeTimeMs:(unsigned long long)arg12 areaId:(unsigned long long)arg13;
- (id)tid;
- (void)setTid:(id)arg1;
- (unsigned long long)markReadScene;
- (void)setMarkReadScene:(unsigned long long)arg1;
- (unsigned long long)markReadSubScene;
- (void)setMarkReadSubScene:(unsigned long long)arg1;
- (int)commentScene;
- (void)setCommentScene:(int)arg1;
- (long long)actionType;
- (void)setActionType:(long long)arg1;
- (id)sessionBuffer;
- (void)setSessionBuffer:(id)arg1;
- (unsigned long long)duration;
- (void)setDuration:(unsigned long long)arg1;
- (unsigned long long)index;
- (void)setIndex:(unsigned long long)arg1;
- (unsigned long long)areaId;
- (void)setAreaId:(unsigned long long)arg1;
- (unsigned long long)autoPlayTimeMs;
- (void)setAutoPlayTimeMs:(unsigned long long)arg1;
- (BOOL)autoPlayWithSound;
- (void)setAutoPlayWithSound:(BOOL)arg1;
- (unsigned long long)startExposeMs;
- (void)setStartExposeMs:(unsigned long long)arg1;
- (unsigned long long)effectiveExposeTimeMs;
- (void)setEffectiveExposeTimeMs:(unsigned long long)arg1;
- (unsigned long long)startEffectiveExposeTimeMs;
- (void)setStartEffectiveExposeTimeMs:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

