@interface TextStatePublishIconList : NSObject
{
    NSMutableArray * _groupArray; // +0x8
    NSMutableDictionary * _descriptionToIconDict; // +0x10
}
- (id)initWithStorage:(id)arg1 maxShowCount:(unsigned long long)arg2;
- (id)iconForDescription:(id)arg1;
- (void)insertGroup:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)removeGroupByIndex:(unsigned long long)arg1;
- (void)removeCustomIcon;
- (void)addIconIntoGroup:(id)arg1 groupIndex:(long long)arg2 iconIndexInGroup:(long long)arg3;
- (id)groupArray;
- (void)setGroupArray:(id)arg1;
- (id)descriptionToIconDict;
- (void)setDescriptionToIconDict:(id)arg1;
- (void).cxx_destruct;
@end
