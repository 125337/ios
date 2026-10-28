@interface BizEnterStatusInfo : NSObject
{
    NSNumber * _enterSource; // +0x8
    NSNumber * _openArticleFromScene; // +0x10
    NSNumber * _isTeenMode; // +0x18
    NSNumber * _redDotCount; // +0x20
    NSNumber * _pos; // +0x28
    NSNumber * _finderLiveRedDotType; // +0x30
    NSString * _finderFeedExportId; // +0x38
    NSNumber * _exposeMsgType; // +0x40
    NSString * _exposeUserName; // +0x48
    NSNumber * _lastExposeId; // +0x50
    NSNumber * _lastExposeMsgId; // +0x58
    NSNumber * _lastExposeMid; // +0x60
    NSNumber * _sessionId; // +0x68
    NSNumber * _enterTime; // +0x70
    NSString * _netType; // +0x78
    NSNumber * _isHeadsetOn; // +0x80
    FlutterStandardTypedData * _redDotReportItem; // +0x88
    NSNumber * _createEngineGroup; // +0x90
    NSNumber * _createEngine; // +0x98
    NSNumber * _startOpenTime; // +0xa0
    NSNumber * _endOnEnterTime; // +0xa8
    NSNumber * _startCreateEngineGroupTime; // +0xb0
    NSNumber * _startCreateEngineTime; // +0xb8
    NSNumber * _startShowFlutterPageTime; // +0xc0
    NSNumber * _firstGroupMsgCount; // +0xc8
    NSString * _reddotReportInfo; // +0xd0
}
+ (id)makeWithEnterSource:(id)arg1 openArticleFromScene:(id)arg2 isTeenMode:(id)arg3 redDotCount:(id)arg4 pos:(id)arg5 finderLiveRedDotType:(id)arg6 finderFeedExportId:(id)arg7 exposeMsgType:(id)arg8 exposeUserName:(id)arg9 lastExposeId:(id)arg10 lastExposeMsgId:(id)arg11 lastExposeMid:(id)arg12 sessionId:(id)arg13 enterTime:(id)arg14 netType:(id)arg15 isHeadsetOn:(id)arg16 redDotReportItem:(id)arg17 createEngineGroup:(id)arg18 createEngine:(id)arg19 startOpenTime:(id)arg20 endOnEnterTime:(id)arg21 startCreateEngineGroupTime:(id)arg22 startCreateEngineTime:(id)arg23 startShowFlutterPageTime:(id)arg24 firstGroupMsgCount:(id)arg25 reddotReportInfo:(id)arg26;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)enterSource;
- (void)setEnterSource:(id)arg1;
- (id)openArticleFromScene;
- (void)setOpenArticleFromScene:(id)arg1;
- (id)isTeenMode;
- (void)setIsTeenMode:(id)arg1;
- (id)redDotCount;
- (void)setRedDotCount:(id)arg1;
- (id)pos;
- (void)setPos:(id)arg1;
- (id)finderLiveRedDotType;
- (void)setFinderLiveRedDotType:(id)arg1;
- (id)finderFeedExportId;
- (void)setFinderFeedExportId:(id)arg1;
- (id)exposeMsgType;
- (void)setExposeMsgType:(id)arg1;
- (id)exposeUserName;
- (void)setExposeUserName:(id)arg1;
- (id)lastExposeId;
- (void)setLastExposeId:(id)arg1;
- (id)lastExposeMsgId;
- (void)setLastExposeMsgId:(id)arg1;
- (id)lastExposeMid;
- (void)setLastExposeMid:(id)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (id)enterTime;
- (void)setEnterTime:(id)arg1;
- (id)netType;
- (void)setNetType:(id)arg1;
- (id)isHeadsetOn;
- (void)setIsHeadsetOn:(id)arg1;
- (id)redDotReportItem;
- (void)setRedDotReportItem:(id)arg1;
- (id)createEngineGroup;
- (void)setCreateEngineGroup:(id)arg1;
- (id)createEngine;
- (void)setCreateEngine:(id)arg1;
- (id)startOpenTime;
- (void)setStartOpenTime:(id)arg1;
- (id)endOnEnterTime;
- (void)setEndOnEnterTime:(id)arg1;
- (id)startCreateEngineGroupTime;
- (void)setStartCreateEngineGroupTime:(id)arg1;
- (id)startCreateEngineTime;
- (void)setStartCreateEngineTime:(id)arg1;
- (id)startShowFlutterPageTime;
- (void)setStartShowFlutterPageTime:(id)arg1;
- (id)firstGroupMsgCount;
- (void)setFirstGroupMsgCount:(id)arg1;
- (id)reddotReportInfo;
- (void)setReddotReportInfo:(id)arg1;
- (void).cxx_destruct;
@end
