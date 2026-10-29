@interface SearchResultFinderLivePlayInfo : NSObject
{
    NSString * _exportId; // +0x8
    NSNumber * _containerWidth; // +0x10
    NSNumber * _containerHeight; // +0x18
}
+ (id)makeWithExportId:(id)arg1 containerWidth:(id)arg2 containerHeight:(id)arg3;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)exportId;
- (void)setExportId:(id)arg1;
- (id)containerWidth;
- (void)setContainerWidth:(id)arg1;
- (id)containerHeight;
- (void)setContainerHeight:(id)arg1;
- (void).cxx_destruct;
@end
