@interface MJAIGCMetadataInfo : NSObject <YYModel>
{
    NSString * _label; // +0x8
    NSString * _contentProducer; // +0x10
    NSString * _produceID; // +0x18
    NSString * _contentPropagator; // +0x20
    NSString * _propagateID; // +0x28
    NSString * _serviceProvider; // +0x30
    NSString * _time; // +0x38
    NSString * _contentID; // +0x40
}
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
+ (id)fromJsonString:(id)arg1;
- (id)initWithLabel:(id)arg1 contentProducer:(id)arg2 produceID:(id)arg3 time:(id)arg4;
- (id)toJsonString;
- (id)description;
- (id)label;
- (void)setLabel:(id)arg1;
- (id)contentProducer;
- (void)setContentProducer:(id)arg1;
- (id)produceID;
- (void)setProduceID:(id)arg1;
- (id)contentPropagator;
- (void)setContentPropagator:(id)arg1;
- (id)propagateID;
- (void)setPropagateID:(id)arg1;
- (id)serviceProvider;
- (void)setServiceProvider:(id)arg1;
- (id)time;
- (void)setTime:(id)arg1;
- (id)contentID;
- (void)setContentID:(id)arg1;
- (void).cxx_destruct;
@end
