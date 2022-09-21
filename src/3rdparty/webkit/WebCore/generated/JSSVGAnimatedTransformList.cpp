/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#include "config.h"

#if ENABLE(SVG)

#include "JSSVGAnimatedTransformList.h"

#include "JSSVGTransformList.h"
#include "SVGTransformList.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSSVGAnimatedTransformList);

/* Hash table */

static const HashTableValue JSSVGAnimatedTransformListTableValues[4] =
{
    { "baseVal", DontDelete|ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGAnimatedTransformListBaseVal), (intptr_t)0 },
    { "animVal", DontDelete|ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGAnimatedTransformListAnimVal), (intptr_t)0 },
    { "constructor", DontEnum|ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGAnimatedTransformListConstructor), (intptr_t)0 },
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSSVGAnimatedTransformListTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 3, JSSVGAnimatedTransformListTableValues, 0 };
#else
    { 8, 7, JSSVGAnimatedTransformListTableValues, 0 };
#endif

/* Hash table for constructor */

static const HashTableValue JSSVGAnimatedTransformListConstructorTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSSVGAnimatedTransformListConstructorTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 0, JSSVGAnimatedTransformListConstructorTableValues, 0 };
#else
    { 1, 0, JSSVGAnimatedTransformListConstructorTableValues, 0 };
#endif

class JSSVGAnimatedTransformListConstructor : public DOMConstructorObject {
public:
    JSSVGAnimatedTransformListConstructor(ExecState* exec, JSDOMGlobalObject* globalObject)
        : DOMConstructorObject(JSSVGAnimatedTransformListConstructor::createStructure(globalObject->objectPrototype()), globalObject)
    {
        putDirect(exec->propertyNames().prototype, JSSVGAnimatedTransformListPrototype::self(exec, globalObject), None);
    }
    virtual bool getOwnPropertySlot(ExecState*, const Identifier&, PropertySlot&);
    virtual bool getOwnPropertyDescriptor(ExecState*, const Identifier&, PropertyDescriptor&);
    virtual const ClassInfo* classInfo() const { return &s_info; }
    static const ClassInfo s_info;

    static PassRefPtr<Structure> createStructure(JSValue proto) 
    { 
        return Structure::create(proto, TypeInfo(ObjectType, StructureFlags), AnonymousSlotCount); 
    }
    
protected:
    static const unsigned StructureFlags = OverridesGetOwnPropertySlot | ImplementsHasInstance | DOMConstructorObject::StructureFlags;
};

const ClassInfo JSSVGAnimatedTransformListConstructor::s_info = { "SVGAnimatedTransformListConstructor", 0, &JSSVGAnimatedTransformListConstructorTable, 0 };

bool JSSVGAnimatedTransformListConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGAnimatedTransformListConstructor, DOMObject>(exec, &JSSVGAnimatedTransformListConstructorTable, this, propertyName, slot);
}

bool JSSVGAnimatedTransformListConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGAnimatedTransformListConstructor, DOMObject>(exec, &JSSVGAnimatedTransformListConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */

static const HashTableValue JSSVGAnimatedTransformListPrototypeTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSSVGAnimatedTransformListPrototypeTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 0, JSSVGAnimatedTransformListPrototypeTableValues, 0 };
#else
    { 1, 0, JSSVGAnimatedTransformListPrototypeTableValues, 0 };
#endif

const ClassInfo JSSVGAnimatedTransformListPrototype::s_info = { "SVGAnimatedTransformListPrototype", 0, &JSSVGAnimatedTransformListPrototypeTable, 0 };

JSObject* JSSVGAnimatedTransformListPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGAnimatedTransformList>(exec, globalObject);
}

const ClassInfo JSSVGAnimatedTransformList::s_info = { "SVGAnimatedTransformList", 0, &JSSVGAnimatedTransformListTable, 0 };

JSSVGAnimatedTransformList::JSSVGAnimatedTransformList(NonNullPassRefPtr<Structure> structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGAnimatedTransformList> impl)
    : DOMObjectWithGlobalPointer(structure, globalObject)
    , m_impl(impl)
{
}

JSSVGAnimatedTransformList::~JSSVGAnimatedTransformList()
{
    forgetDOMObject(this, impl());
    JSSVGContextCache::forgetWrapper(this);
}

JSObject* JSSVGAnimatedTransformList::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSSVGAnimatedTransformListPrototype(JSSVGAnimatedTransformListPrototype::createStructure(globalObject->objectPrototype()));
}

bool JSSVGAnimatedTransformList::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGAnimatedTransformList, Base>(exec, &JSSVGAnimatedTransformListTable, this, propertyName, slot);
}

bool JSSVGAnimatedTransformList::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGAnimatedTransformList, Base>(exec, &JSSVGAnimatedTransformListTable, this, propertyName, descriptor);
}

JSValue jsSVGAnimatedTransformListBaseVal(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGAnimatedTransformList* castedThis = static_cast<JSSVGAnimatedTransformList*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGAnimatedTransformList* imp = static_cast<SVGAnimatedTransformList*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->baseVal()), JSSVGContextCache::svgContextForDOMObject(castedThis));
    return result;
}

JSValue jsSVGAnimatedTransformListAnimVal(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGAnimatedTransformList* castedThis = static_cast<JSSVGAnimatedTransformList*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGAnimatedTransformList* imp = static_cast<SVGAnimatedTransformList*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->animVal()), JSSVGContextCache::svgContextForDOMObject(castedThis));
    return result;
}

JSValue jsSVGAnimatedTransformListConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGAnimatedTransformList* domObject = static_cast<JSSVGAnimatedTransformList*>(asObject(slotBase));
    return JSSVGAnimatedTransformList::getConstructor(exec, domObject->globalObject());
}
JSValue JSSVGAnimatedTransformList::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGAnimatedTransformListConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, SVGAnimatedTransformList* object, SVGElement* context)
{
    return getDOMObjectWrapper<JSSVGAnimatedTransformList>(exec, globalObject, object, context);
}
SVGAnimatedTransformList* toSVGAnimatedTransformList(JSC::JSValue value)
{
    return value.inherits(&JSSVGAnimatedTransformList::s_info) ? static_cast<JSSVGAnimatedTransformList*>(asObject(value))->impl() : 0;
}

}

#endif // ENABLE(SVG)
