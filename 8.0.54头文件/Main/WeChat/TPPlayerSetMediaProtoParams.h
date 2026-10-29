@interface TPPlayerSetMediaProtoParams : NSObject
{
    long long _playerId; // +0x8
    long long _mediaType; // +0x10
    FlutterStandardTypedData * _mediaProto; // +0x18
    long long _startPlayPosition; // +0x20
}
+ (id)makeWithPlayerId:(long long)arg1 mediaType:(long long)arg2 mediaProto:(id)arg3 startPlayPosition:(long long)arg4;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (long long)playerId;
- (void)setPlayerId:(long long)arg1;
- (long long)mediaType;
- (void)setMediaType:(long long)arg1;
- (id)mediaProto;
- (void)setMediaProto:(id)arg1;
- (long long)startPlayPosition;
- (void)setStartPlayPosition:(long long)arg1;
- (void).cxx_destruct;
@end

