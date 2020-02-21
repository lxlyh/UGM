#pragma once

#include "Interfaces/IQuat/IQuatMul.h"
#include "Interfaces/IQuat/IQuatInOut.h"
#include "point.h"
#include "vec.h"

namespace Ubpa {
	template<typename T>
	struct quat : SIIT_CRTP<TemplateList<IQuatInOut, IQuatMul>, quat<T>, TypeList<T>> {
		using SIIT_CRTP<TemplateList<IQuatInOut, IQuatMul>, quat<T>, TypeList<T>>::SIIT_CRTP;
	};

	using quatf = quat<float>;
}