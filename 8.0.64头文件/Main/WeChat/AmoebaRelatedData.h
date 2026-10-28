@interface AmoebaRelatedData : NSObject
{
    NSString * m_targetId; // +0x8
    NSMutableDictionary * m_params; // +0x10
}
- (id)init;
- (id)getTargetId;
- (void)setTargetId:(id)arg1;
- (id)getParams;
- (void)setParams:(id)arg1;
- (void)putParam:(id)arg1 withValue:(id)arg2;
- (void)putParams:(id)arg1;
- (void)reset;
- (void).cxx_destruct;
@end
