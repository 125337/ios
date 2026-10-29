@interface TPPlayerPreloadParams : NSObject
{
    long long _commentScene; // +0x8
    FlutterStandardTypedData * _mediaProto; // +0x10
}
+ (id)makeWithCommentScene:(long long)arg1 mediaProto:(id)arg2;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (long long)commentScene;
- (void)setCommentScene:(long long)arg1;
- (id)mediaProto;
- (void)setMediaProto:(id)arg1;
- (void).cxx_destruct;
@end

