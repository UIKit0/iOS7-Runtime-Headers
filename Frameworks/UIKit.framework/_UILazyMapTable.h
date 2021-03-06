/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSMapTable;

@interface _UILazyMapTable : NSObject  {

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _mappingBlock;

    NSMapTable *_keysToClientTables;
    NSMapTable *_keysToValues;
    NSMapTable *_valuesToKeys;
}


- (id)keys;
- (id)objectForKey:(id)arg1;
- (unsigned int)count;
- (void)dealloc;
- (id)description;
- (id)keyEnumerable;
- (id)cachedObjects;
- (void)unregisterClient:(id)arg1 ofObjectForKey:(id)arg2;
- (BOOL)hasCachedObjectForKey:(id)arg1;
- (void)registerClient:(id)arg1 ofObjectForKey:(id)arg2;
- (id)cachedObjectEnumerable;
- (id)initWithMappingBlock:(id)arg1;

@end
