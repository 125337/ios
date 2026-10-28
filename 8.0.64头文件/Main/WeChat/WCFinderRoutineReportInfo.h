@interface WCFinderRoutineReportInfo : NSObject
{
    BOOL _isFullScreen; // +0x8
    BOOL _isADFlag; // +0x9
    unsigned long long _scene; // +0x10
    NSString * _feedId; // +0x18
    unsigned long long _actionType; // +0x20
    NSMutableDictionary * _actionValueDict; // +0x28
    long long _actionValue; // +0x30
    unsigned long long _actionTimestamp; // +0x38
    unsigned long long _mediaType; // +0x40
    NSString * _sessionBuffer; // +0x48
    unsigned long long _videoDurationTime; // +0x50
    unsigned long long _firstVideoDataSource; // +0x58
    NSString * _longVideoId; // +0x60
    unsigned long long _exposeTimes; // +0x68
    NSDictionary * _feedClientInfo; // +0x70
    NSString * _fromContextId; // +0x78
}
- (id)actionValueDict;
- (id)reportInfoStr;
- (id)getReportJsonFormatStringWithDictionary:(id)arg1;
- (id)getJsonFormatStringWithDictionary:(id)arg1;
- (id)replaceCommaToSemicolon:(id)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (id)feedId;
- (void)setFeedId:(id)arg1;
- (unsigned long long)actionType;
- (void)setActionType:(unsigned long long)arg1;
- (void)setActionValueDict:(id)arg1;
- (long long)actionValue;
- (void)setActionValue:(long long)arg1;
- (unsigned long long)actionTimestamp;
- (void)setActionTimestamp:(unsigned long long)arg1;
- (unsigned long long)mediaType;
- (void)setMediaType:(unsigned long long)arg1;
- (id)sessionBuffer;
- (void)setSessionBuffer:(id)arg1;
- (unsigned long long)videoDurationTime;
- (void)setVideoDurationTime:(unsigned long long)arg1;
- (unsigned long long)firstVideoDataSource;
- (void)setFirstVideoDataSource:(unsigned long long)arg1;
- (id)longVideoId;
- (void)setLongVideoId:(id)arg1;
- (BOOL)isFullScreen;
- (void)setIsFullScreen:(BOOL)arg1;
- (unsigned long long)exposeTimes;
- (void)setExposeTimes:(unsigned long long)arg1;
- (id)feedClientInfo;
- (void)setFeedClientInfo:(id)arg1;
- (id)fromContextId;
- (void)setFromContextId:(id)arg1;
- (BOOL)isADFlag;
- (void)setIsADFlag:(BOOL)arg1;
- (void).cxx_destruct;
@end
