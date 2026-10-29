@interface MMFinderLiveAiAssistantToolRegistry : NSObject
{
    NSMutableDictionary * _classByKey; // +0x8
    NSMutableArray * _orderedClasses; // +0x10
}
+ (id)identifierForToolName:(id)arg1 version:(id)arg2;
+ (id)identifierForToolClass:(Class)arg1;
- (id)init;
- (void)registerToolClass:(Class)arg1;
- (Class)lookupByName:(id)arg1 version:(id)arg2;
- (id)allTools;
- (id)classByKey;
- (void)setClassByKey:(id)arg1;
- (id)orderedClasses;
- (void)setOrderedClasses:(id)arg1;
- (void).cxx_destruct;
@end
