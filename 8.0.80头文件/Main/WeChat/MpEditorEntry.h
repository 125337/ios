@interface MpEditorEntry : NSObject
{
    NSString * _msgInfo; // +0x8
    NSNumber * _source; // +0x10
    NSString * _from; // +0x18
}
+ (id)makeWithMsgInfo:(id)arg1 source:(id)arg2 from:(id)arg3;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)msgInfo;
- (void)setMsgInfo:(id)arg1;
- (id)source;
- (void)setSource:(id)arg1;
- (id)from;
- (void)setFrom:(id)arg1;
- (void).cxx_destruct;
@end
