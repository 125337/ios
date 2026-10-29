@interface OVCLowerThirdTextLayerBuildData : NSObject
{
    BOOL _shouldUsePlaceholder; // +0x8
    NSDictionary * _mustacheData; // +0x10
    NSDictionary * _userInputsByBlockID; // +0x18
    NSDictionary * _defaultContentsByBlockID; // +0x20
    NSDictionary * _placeholdersByBlockID; // +0x28
}
- (id)initWithMustacheData:(id)arg1 userInputsByBlockID:(id)arg2 defaultContentsByBlockID:(id)arg3 placeholdersByBlockID:(id)arg4 shouldUsePlaceholder:(BOOL)arg5;
- (id)mustacheData;
- (id)userInputsByBlockID;
- (id)defaultContentsByBlockID;
- (id)placeholdersByBlockID;
- (BOOL)shouldUsePlaceholder;
- (void).cxx_destruct;
@end

