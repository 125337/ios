@interface CBTAsstModelInfo : NSObject
{
    BOOL _isSelected; // +0x8
    NSString * _modelId; // +0x10
    NSString * _name; // +0x18
}
- (id)initWithPB:(id)arg1;
- (id)modelId;
- (void)setModelId:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (BOOL)isSelected;
- (void)setIsSelected:(BOOL)arg1;
- (void).cxx_destruct;
@end
