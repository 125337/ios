@interface MMGCRootsTracingObject : MMGCRootsTracingGraphElement
- (id)allRetainedObjects;
- (BOOL)_objectRetainsEnumerableValues;
- (BOOL)_objectRetainsEnumerableKeys;
@end

