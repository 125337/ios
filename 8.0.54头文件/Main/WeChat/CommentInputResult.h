@interface CommentInputResult : NSObject
{
    NSString * _inputResult; // +0x8
    NSNumber * _realIdentityType; // +0x10
    FlutterStandardTypedData * _commentInfo; // +0x18
}
+ (id)makeWithInputResult:(id)arg1 realIdentityType:(id)arg2 commentInfo:(id)arg3;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)inputResult;
- (void)setInputResult:(id)arg1;
- (id)realIdentityType;
- (void)setRealIdentityType:(id)arg1;
- (id)commentInfo;
- (void)setCommentInfo:(id)arg1;
- (void).cxx_destruct;
@end

